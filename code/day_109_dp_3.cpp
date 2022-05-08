/*
给定一个三角形 triangle ，找出自顶向下的最小路径和。

每一步只能移动到下一行中相邻的结点上。相邻的结点 在这里指的是 下标 与 上一层结点下标 相同或者等于 上一层结点下标 + 1 的两个结点。也就是说，如果正位于当前行的下标 i ，那么下一步可以移动到下一行的下标 i 或 i + 1 。

作者：宫水三叶
链接：https://leetcode-cn.com/leetbook/read/path-problems-in-dynamic-programming/rtfiiv/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
*/

//class Solution {
//public:
//    int minimumTotal(vector<vector<int>>& triangle) {
//        vector<unsigned int> dp(triangle.size(),0xffffffff);
//        for(int i = triangle.size()-1;i>=0;i--){
//            for(int j = 0;j<triangle[i].size();j++){
//                if(i+1<triangle.size()){
//                    triangle[i][j] = triangle[i][j]+(triangle[i+1][j]<triangle[i+1][j+1]?triangle[i+1][j]:triangle[i+1][j+1]);
//                    dp[i] = dp[i]<triangle[i][j]?dp[i]:triangle[i][j];
//                }else{
//                    dp[i] = dp[i]<triangle[i][j]?dp[i]:triangle[i][j];
//                }
//            }
//        }
//        return  dp[0];
//    }
//};
