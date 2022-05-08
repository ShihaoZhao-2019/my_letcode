/*
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.



作者：力扣 (LeetCode)
链接：https://leetcode-cn.com/leetbook/read/top-interview-questions-medium/xwnvrj/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
*/

//class Solution {
//public:
//    int majorityElement(vector<int>& nums) {
//        int res = nums[0];
//        int count = 1;
//        for(int i=1;i<nums.size();i++){
//            if(nums[i]==res)count++;
//            else{
//                count--;
//                if(count<0){
//                    count = 1;
//                    res = nums[i];
//                }
//            }
//        }
//        return res;
//    }
//};
