/*
给你一个整数 n ，返回 和为 n 的完全平方数的最少数量 。

完全平方数 是一个整数，其值等于另一个整数的平方；换句话说，其值等于一个整数自乘的积。例如，1、4、9 和 16 都是完全平方数，而 3 和 11 不是。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/perfect-squares
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/


//class Solution {
//public:
//    int numSquares(int n) {
//        vector<int> dp(n+1,0);
//        for(int i=1;i<=n;i++){
//            dp[i] = i;
//            for(int j = 1;i-j*j>=0;j++){
//                dp[i] = min(dp[i],dp[i-j*j]+1);
//            }
//        }
//        for(int i=0;i<dp.size();i++)cout<<dp[i]<<endl;
//        return dp[n];
//    }
//};
