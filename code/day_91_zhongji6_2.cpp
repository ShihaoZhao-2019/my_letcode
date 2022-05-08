/*
一个机器人位于一个 m x n 网格的左上角 （起始点在下图中标记为 “Start” ）。

机器人每次只能向下或者向右移动一步。机器人试图达到网格的右下角（在下图中标记为 “Finish” ）。

问总共有多少条不同的路径

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/unique-paths
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/


//class Solution {
//public:
//    int uniquePaths(int m, int n) {
//        vector<vector<int>> pathNumber(m,vector<int>(n,1));
//        for(int i=m-2;i>=0;i--)for(int j=n-2;j>=0;j--)pathNumber[i][j] = pathNumber[i+1][j] + pathNumber[i][j+1];
//        return pathNumber[0][0];

//    }
//};
