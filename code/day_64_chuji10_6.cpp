/*
给定一个包含 [0, n] 中 n 个数的数组 nums ，找出 [0, n] 这个范围内没有出现在数组中的那个数。
*/

//class Solution {
//public:
//    int missingNumber2(vector<int>& nums) {
//        int sum = (1+nums.size())*nums.size()/2;
//        for(auto &vaule : nums)
//        {
//            sum-=vaule;
//        }
//        return sum;
//    }
//    int missingNumber(vector<int>& nums){
//        int result = 0;
//        int i=0;
//        for(auto &value : nums)
//        {
//            result^=value;
//            result^=i++;
//        }
//        result^=i;
//        return result;
//    }
//};
