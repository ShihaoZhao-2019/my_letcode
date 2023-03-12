#include<iostream>
#include<vector>
/*
找出数组中重复的数字。


在一个长度为 n 的数组 nums 里的所有数字都在 0～n-1 的范围内。数组中某些数字是重复的，但不知道有几个数字重复了，也不知道每个数字重复了几次。请找出数组中任意一个重复的数字。

来源：力扣（LeetCode）
链接：https://leetcode.cn/problems/shu-zu-zhong-zhong-fu-de-shu-zi-lcof
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

class Solution {
public:
    int findRepeatNumber(std::vector<int>& nums) {
        std::vector<int> nums_index(nums.size(),nums.size());
        for(int i=0;i<nums.size();i++)
        {
            if(nums_index[nums[i]]==nums.size())
                nums_index[nums[i]] = i;
            else 
                return nums[i];
        }
        return -1;
    }
};

int main()
{
    return 0;
}