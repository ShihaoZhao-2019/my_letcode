/*
给定一个 m x n 的矩阵，如果一个元素为 0 ，则将其所在行和列的所有元素都设为 0 。请使用 原地 算法。

进阶：

一个直观的解决方案是使用  O(mn) 的额外空间，但这并不是一个好的解决方案。
一个简单的改进方案是使用 O(m + n) 的额外空间，但这仍然不是最好的解决方案。
你能想出一个仅使用常量空间的解决方案吗？

作者：力扣 (LeetCode)
链接：https://leetcode-cn.com/leetbook/read/top-interview-questions-medium/xvmy42/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
*/



//class Solution {
//public:
///***思路***
//*首先判断第一行第一列是否有0，并且设置flag记录
//*从1,1开始寻找0，找到0把对应行和对应列的第一个元素设置为0
//*从第一行第一列中找0然后把对应行对应列设置为0
//*根据前面设置的flag将第一行或者第一列设置为0
//***/
//    void setZeroes(vector<vector<int>>& matrix) {
//        int rowFlag = 0;
//        //先找第一行是否有0
//        for(auto &vaule : matrix[0])
//        {
//            if(vaule==0)
//            {
//                rowFlag++;
//                break;
//            }
//        }

//        int colFlag = 0;
//        //再找第一列是否有零
//        for(auto &vaule : matrix)
//        {
//            if(vaule[0]==0)
//            {
//                colFlag++;
//                break;
//            }
//        }

//        for(int row=1;row<matrix.size();row++)
//        for(int col=1;col<matrix[0].size();col++)
//        {
//            if(matrix[row][col]==0)
//            {
//                matrix[row][0] = 0;
//                matrix[0][col] = 0;
//            }
//        }

//        //设置0
//        for(int row=1; row<matrix.size();row++)if(matrix[row][0]==0) for(int col=1;col<matrix[row].size();col++)matrix[row][col] = 0;
//        for(int col=1;col<matrix[0].size();col++) if(matrix[0][col]==0) for(int row=1;row<matrix.size();row++)matrix[row][col] = 0;
//        if(rowFlag)for(auto &vaule : matrix[0])vaule = 0;
//        if(colFlag)for(auto &vaule : matrix)vaule[0] = 0;
//    }
//};
