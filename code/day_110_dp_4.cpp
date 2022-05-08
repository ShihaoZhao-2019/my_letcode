/*
给你一个 n x n 的 方形 整数数组 matrix ，请你找出并返回通过 matrix 的下降路径 的 最小和 。

下降路径 可以从第一行中的任何元素开始，并从每一行中选择一个元素。在下一行选择的元素和当前行所选元素最多相隔一列（即位于正下方或者沿对角线向左或者向右的第一个元素）。具体来说，位置 (row, col) 的下一个元素应当是 (row + 1, col - 1)、(row + 1, col) 或者 (row + 1, col + 1) 。

作者：宫水三叶
链接：https://leetcode-cn.com/leetbook/read/path-problems-in-dynamic-programming/r85adr/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
*/


//class Solution {
//public:
//    int minFallingPathSum(vector<vector<int>>& matrix) {
//        int min;
//        for(int i = matrix.size()-1;i>=0;i--){
//            for(int j=matrix.size()-1;j>=0;j--){
//                if(i+1<matrix.size()&&j+1<matrix.size()&&j-1>=0){
//                    int temp = matrix[i+1][j-1]<matrix[i+1][j]?matrix[i+1][j-1]:matrix[i+1][j];
//                    temp = temp<matrix[i+1][j+1]?temp:matrix[i+1][j+1];
//                    matrix[i][j] += temp;
//                }else if(i+1<matrix.size()&&j+1<matrix.size()){
//                    int temp = matrix[i+1][j]<matrix[i+1][j+1]?matrix[i+1][j]:matrix[i+1][j+1];
//                    matrix[i][j] += temp;
//                }else if(i+1<matrix.size()&&j-1>=0){
//                    int temp = matrix[i+1][j-1]<matrix[i+1][j]?matrix[i+1][j-1]:matrix[i+1][j];
//                    matrix[i][j] += temp;
//                }
//                if(i==0&&j==matrix.size()-1){
//                    min = matrix[i][j];
//                }else if(i==0){
//                    min = min<matrix[i][j]?min:matrix[i][j];
//                }
//            }
//        }
//        return min;
//    }
//};
