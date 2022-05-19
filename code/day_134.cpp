/*
给你一个长度为 n 的整数数组 nums ，返回使所有数组元素相等需要的最少移动数。

在一步操作中，你可以使数组中的一个元素加 1 或者减 1 。
*/

class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int target = nums[nums.size()/2];
        int result = 0;
        for(auto val:nums)result+=abs(target-val);
        return result;
    }
};
