/*
给定一个整数数组 nums ，找到一个具有最大和的连续子数组（子数组最少包含一个元素），返回其最大和。
*/

//class Solution {
//public:
//    int maxSubArray(vector<int>& nums) {
//        int max = -2147483648;;
//        int tempMax = -2147483648;;
//        for(int i=0;i<nums.size();i++)
//        {
//            if(tempMax<0)tempMax = 0;
//                tempMax+= nums[i];
//            if(tempMax>max)max = tempMax;
//        }
//        return max;
//    }
//};
