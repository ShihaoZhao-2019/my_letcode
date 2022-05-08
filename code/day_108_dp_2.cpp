/*
给定一个包含非负整数的 m x n 网格 grid ，请找出一条从左上角到右下角的路径，使得路径上的数字总和为最小。

说明：每次只能向下或者向右移动一步。
*/

//class Solution {
//public:
//    int minPathSum(vector<vector<int>>& grid) {
//        int m = grid.size();
//        int n = grid[0].size();
//        for(int i=m-1;i>=0;i--){
//            for(int j=n-1;j>=0;j--){
//                if(i+1<m&&j+1<n) grid[i][j] = grid[i][j] + (grid[i+1][j]<grid[i][j+1]?grid[i+1][j]:grid[i][j+1]);
//                else if(i+1<m) grid[i][j] = grid[i][j] + grid[i+1][j];
//                else if(j+1<n) grid[i][j] = grid[i][j] + grid[i][j+1];
//                else grid[i][j] = grid[i][j];
//            }
//        }
//        return grid[0][0];
//    }
//};
