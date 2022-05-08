/*
给你一个整数数组 nums ，找到其中最长严格递增子序列的长度。

子序列 是由数组派生而来的序列，删除（或不删除）数组中的元素而不改变其余元素的顺序。例如，[3,6,2,7] 是数组 [0,3,1,6,2,2,7] 的子序列。

作者：力扣 (LeetCode)
链接：https://leetcode-cn.com/leetbook/read/top-interview-questions-medium/xwhvq3/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
*/

//class Solution {
//public:
//    int lengthOfLIS(vector<int>& nums) {
//        vector<int> dp(nums.size()+1,1);
//        for(int i=1;i<nums.size();i++){
//            for(int j=0;j<i;j++)if(nums[i]>nums[j])dp[i] = max(dp[j]+1,dp[i]);
//            dp[nums.size()] = max(dp[i],dp[nums.size()]);
//        }
//        return dp[nums.size()];
//    }
//};


//class Solution {
//public:
//    void insert(vector<int>& nums,int val){
//        int left = 0;
//        int right = nums.size()-1;
//        int middle;
//        while(left<=right){
//            middle = (left+right)/2;
//            if(nums[middle]==val)return ;
//            else if(nums[middle]<val){
//                left = middle+1;
//            }else{
//                right = middle-1;
//            }
//        }


//        nums[left] = val;


//    }
//    int lengthOfLIS(vector<int>& nums) {
//        vector<int> seq;
//        seq.push_back(nums[0]);
//        for(int i=1;i<nums.size();i++){

//            if(nums[i]>seq.back())seq.push_back(nums[i]);
//            else if(nums[i]<seq[0])seq[0]=nums[i];
//            else{
//                //二分查找插入
//                insert(seq,nums[i]);
//            }

//        }
//        return seq.size();

//    }
//};
