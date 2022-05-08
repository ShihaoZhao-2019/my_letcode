/*
给定一个 n × n 的二维矩阵 matrix 表示一个图像。请你将图像顺时针旋转 90 度。

你必须在 原地 旋转图像，这意味着你需要直接修改输入的二维矩阵。请不要 使用另一个矩阵来旋转图像。

作者：力扣 (LeetCode)
链接：https://leetcode-cn.com/leetbook/read/top-interview-questions-easy/xnhhkv/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
*/

//class Solution {
//public:
//    void swap(int &a,int &b)
//    {
//        int c = a;
//        a = b;
//        b = c;
//    }
//    //矩阵转置
//    void T(vector<vector<int>>& matrix)
//    {
//        int n = matrix.size();
//        for(int i = 0;i<n;i++)
//            for(int j=i+1;j<n;j++)
//                swap(matrix[i][j],matrix[j][i]);
//    }
//    //数组翻转
//    void reverse(vector<int> &nums)
//    {
//        int i = 0;
//        int j = nums.size()-1;
//        while(i<j)swap(nums[i++],nums[j--]);
//    }
//    void rotate(vector<vector<int>>& matrix) {
//        T(matrix);
//        for(int i=0;i<matrix.size();i++)
//        reverse(matrix[i]);
//    }
//};
