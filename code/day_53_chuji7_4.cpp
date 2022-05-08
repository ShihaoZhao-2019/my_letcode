/*
你是一个专业的小偷，计划偷窃沿街的房屋。每间房内都藏有一定的现金，影响你偷窃的唯一制约因素就是相邻的房屋装有相互连通的防盗系统，如果两间相邻的房屋在同一晚上被小偷闯入，系统会自动报警。

给定一个代表每个房屋存放金额的非负整数数组，计算你 不触动警报装置的情况下 ，一夜之内能够偷窃到的最高金额。

作者：力扣 (LeetCode)
链接：https://leetcode-cn.com/leetbook/read/top-interview-questions-easy/xnq4km/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
*/

//class Solution {
//public:
//    int rob(vector<int>& nums) {
//    if(nums.size()==1) return nums[0];

//    vector<int> dp(nums.size());
//    dp[0] = nums[0];
//    dp[1] = nums[1]>nums[0]?nums[1]:nums[0];
//    if(nums.size()==2) return dp[1];


//    for(int i=2;i<nums.size();i++)
//    {
//        dp[i] = dp[i-1]>dp[i-2]+nums[i]?dp[i-1]:dp[i-2]+nums[i];//转移方程
//    }
//    return dp[nums.size()-1];

//    }
//};
