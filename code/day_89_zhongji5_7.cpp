/*
编写一个高效的算法来搜索 m x n 矩阵 matrix 中的一个目标值 target 。该矩阵具有以下特性：

每行的元素从左到右升序排列。
每列的元素从上到下升序排列。


来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/search-a-2d-matrix-ii
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

//class Solution {
//public:
//    bool searchMatrix(vector<vector<int>>& matrix, int target) {
//        for(int i=0;i<matrix[0].size();i++)
//        {
//            if(matrix[0][i]>target)break;
//            int rowLeft = 0;
//            int rowRight = matrix.size()-1;
//            int rowMiddle;
//            while(rowLeft<=rowRight){
//                rowMiddle = (rowLeft+rowRight)/2;
//                if(matrix[rowMiddle][i]==target)
//                    return 1;
//                else if(matrix[rowMiddle][i]<target)
//                    rowLeft = rowMiddle+1;
//                else
//                    rowRight = rowMiddle-1;
//            }
//        }
//        return 0;
//    }
//};



//class Solution {
//public:
//    bool searchMatrix(vector<vector<int>>& matrix, int target) {
//        int m = matrix.size();
//        int n = matrix[0].size();
//        int x = 0;
//        int y = n-1;
//        while(x<m&&y>=0){
//            if(matrix[x][y]==target)return 1;
//            else if(matrix[x][y]>target) --y;
//            else ++x;
//        }
//        return 0;
//    }
//};
