/*
给你一个 n x n 整数矩阵 arr ，请你返回 非零偏移下降路径 数字和的最小值。

非零偏移下降路径 定义为：从 arr 数组中的每一行选择一个数字，且按顺序选出来的数字中，相邻数字不在原数组的同一列。



作者：宫水三叶
链接：https://leetcode-cn.com/leetbook/read/path-problems-in-dynamic-programming/r8oh2h/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
*/

//class Solution {
//public:
//    int minRow(vector<int> row,int divd){
//        int min = 0x7fffffff;
//        for(int i=0;i<row.size();i++)if(i!=divd)min = min<row[i]?min:row[i];
//        return min;

//    }
//    int minFallingPathSum(vector<vector<int>>& grid) {
//        int min;
//        for(int i = grid.size()-1;i>=0;i--){
//            for(int j=grid.size()-1;j>=0;j--){
//                if(i+1<grid.size()){
//                    grid[i][j] += minRow(grid[i+1],j);
//                }
//                if(i==0&&j==grid.size()-1){
//                    min = grid[i][j];
//                }else if(i==0){
//                    min = min<grid[i][j]?min:grid[i][j];
//                }
//            }
//        }
//        return min;
//    }
//};
