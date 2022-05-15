/*
给定包含多个点的集合，从其中取三个点组成三角形，返回能组成的最大三角形的面积。

示例:
输入: points = [[0,0],[0,1],[1,0],[0,2],[2,0]]
输出: 2
解释: 
这五个点如下图所示。组成的橙色三角形是最大的，面积为2

来源：力扣（LeetCode）
链接：https://leetcode.cn/problems/largest-triangle-area
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/


/*
海伦-秦九韶公式
已知三边是a,b,c
令p=(a+b+c)/2
则S=√[p(p-a)(p-b)(p-c)] = 0.5 * abs(x1 * y2 + x2 * y3 + x3 * y1 - x1 * y3 - x2 * y1 - x3 * y2);
*/
class Solution {
public:
    double triAngleArea(double edge1,double edge2 ,double edge3){
        
        double p = (edge1+edge2+edge3)/2;
        double area = pow(p*(p-edge1)*(p-edge2)*(p-edge3),0.5);
        // cout<<edge1<<'\t'<<edge2<<'\t'<<edge3<<'\t'<<area<<endl;
        return area;
    }
    double triAngleArea2(int x1, int y1, int x2, int y2, int x3, int y3) {
        if((x1-x2 == 0&&y1-y2 == 0) || (x1-x3 == 0&&y1-y3 == 0) ||(x2-x3 == 0&&y2-y3 == 0)) return 0;
        return 0.5 * abs(x1 * y2 + x2 * y3 + x3 * y1 - x1 * y3 - x2 * y1 - x3 * y2);
    }

    vector<double> judgeRightful(vector<int> point1,vector<int> point2,vector<int> point3){
        vector<double> result;
        
        double edge1 = pow(pow(point2[1] - point1[1],2)+pow(point2[0] - point1[0],2),0.5);
        double edge2 = pow(pow(point3[1] - point1[1],2)+pow(point3[0] - point1[0],2),0.5);
        double edge3 = pow(pow(point2[1] - point3[1],2)+pow(point2[0] - point3[0],2),0.5);
        if(edge1<1 ||edge2<1 ||edge3<1)return result;
        result.push_back(edge1);
        result.push_back(edge2);
        result.push_back(edge3);
        return result;

    }
    double largestTriangleArea(vector<vector<int>>& points) {
        double maxArea = -1;
        for(int i=0;i<points.size();i++){
            for(int j=0;j<points.size();j++){
                if(i==j)continue;
                for(int k=0;k<points.size();k++){
                    if(i==k ||j==k)continue;
                    double tri_area = triAngleArea2(points[i][0],points[i][1],points[j][0],points[j][1],points[k][0],points[k][1]);
                    maxArea = tri_area>maxArea?tri_area:maxArea;
                }
            }
        }
        return maxArea;
    }
};
