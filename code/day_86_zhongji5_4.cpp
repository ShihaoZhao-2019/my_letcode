/*
峰值元素是指其值严格大于左右相邻值的元素。

给你一个整数数组 nums，找到峰值元素并返回其索引。数组可能包含多个峰值，在这种情况下，返回 任何一个峰值 所在位置即可。

你可以假设 nums[-1] = nums[n] = -∞ 。

你必须实现时间复杂度为 O(log n) 的算法来解决此问题。

作者：力扣 (LeetCode)
链接：https://leetcode-cn.com/leetbook/read/top-interview-questions-medium/xv4hjg/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
*/


//class Solution {
//public:
//    int findPeakElement(vector<int>& nums) {
//        if(nums.size()==1)return 0;
//        int left = 0;
//        int right = nums.size()-1;
//        int middle;
//        while(left<=right){

//            middle = (left+right)/2;

//            if(middle==0&&nums[middle]>nums[middle+1])return middle;
//            else if(middle==0&&nums[middle]<nums[middle+1])return middle+1;
//            if(middle==nums.size()-1&&nums[middle]>nums[middle-1])return middle;
//            else if(middle==nums.size()-1&&nums[middle]<nums[middle-1]) return middle-1;

//            if((nums[middle]>nums[middle+1]) && (nums[middle]>nums[middle-1])) return middle;

//            if(nums[middle]<nums[middle-1])right = middle-1;
//            else {
//                left = middle+1;
//            }


//        }
//        return middle;

//    }
//};
