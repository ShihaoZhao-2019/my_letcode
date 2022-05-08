/*
给定一个非负整数数组 nums ，你最初位于数组的 第一个下标 。

数组中的每个元素代表你在该位置可以跳跃的最大长度。

判断你是否能够到达最后一个下标。
*/

//class Solution {
//public:
//    /**创建一个dp数组，从后向前规划，从当前位置到自己能跳的的最大位置中间只要有一个True则当前位置就是True**/
//    bool canJump2(vector<int>& nums) {
//        vector<bool> dp(nums.size(),0) ;
//        dp[nums.size()-1] = 1;
//        for(int i = nums.size()-2;i>=0;i--){
//            int j = nums[i]+i;
//            if(j>=nums.size()){
//                dp[i] = 1;
//                continue;
//            }
//            while(j>=i+1){
//                if(dp[j]){
//                    dp[i] = 1;
//                    break;
//                }
//                --j;
//            }
//        }
//        return dp[0];
//    }
//    bool canJump(vector<int>& nums) {
//        if(nums.size()==1)return 1;
//        int i=nums[0];
//        int j = 1;
//        while(i>0){
//            if(j>=nums.size()-1)return 1;
//            i--;
//            if(nums[j]>i){
//                i = nums[j];
//            }
//            j++;


//        }
//        return 0;

//    }
//};
