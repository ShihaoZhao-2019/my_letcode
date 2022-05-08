/*
给定一个非空的正整数数组 nums ，请判断能否将这些数字分成元素和相等的两部分。
*/

//class Solution {
//public:
//    bool canPartition(vector<int>& nums) {
//        int sum  = accumulate(nums.begin(),nums.end(),0);
//        //如果和为奇数则肯定不可以分成完全相等的两部分
//        if(sum%2 == 1) return false;

//        int target = sum/2;

//        vector<vector<int>> dp(nums.size()+1, vector<int>(target+1, 0));//初始化一个全为0的二维数组

//        for(int i=1;i<nums.size()+1;i++)
//        for(int j=1;j<target+1;j++)
//        {
//            int withI = j>=nums.at(i-1)?nums.at(i-1) + dp[i-1][j-nums.at(i-1)]:0;
//            int withoutI = dp[i-1][j];
//            dp[i][j] = max(withI,withoutI);
//        }
//        return dp[nums.size()][target] == target;

//    }
//};


//没看懂后面接着看
//class Solution2 {
//public:
//    bool canPartition(vector<int>& nums) {
//        if(nums.size() < 2)
//            return false;

//        sort(nums.begin(), nums.end());
//        int sum = accumulate(nums.begin(), nums.end(), 0);

//        if(sum % 2 != 0)
//            return false;

//        int target = sum / 2;
//        if(nums.back() > target)
//            return false;

//        vector<int> dp(target+1, 0);
//        dp[0] = 1;

//        for(int i = 0; i < nums.size(); i++){
//            int num = nums[i];
//            for(int j = target; j >= num; j--){
//                dp[j] |= dp[j-num];
//            }
//        }
//        return dp[target];

//    }
//};
