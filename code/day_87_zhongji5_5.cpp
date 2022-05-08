
/*
给定一个按照升序排列的整数数组 nums，和一个目标值 target。找出给定目标值在数组中的开始位置和结束位置。

如果数组中不存在目标值 target，返回 [-1, -1]。

进阶：

你可以设计并实现时间复杂度为 O(log n) 的算法解决此问题吗？
*/

//class Solution {
//public:
//    vector<int> searchRange(vector<int>& nums, int target) {
//        vector<int> result = {-1,-1};
//        if(nums.size()==0)return result;
//        //二分查找找左面
//        int left = 0;
//        int right = nums.size()-1;
//        int middle;
//        int ans = nums.size();
//        while(left<=right){
//            middle = (right+left)/2;
//            if(nums[middle]>=target){
//                right = middle-1;

//            }else{
//                left = middle+1;
//                ans = left;
//            }
//        }
//        if(ans==nums.size()&&nums[0]==target)result[0] = 0;
//        else if(ans>=0&&ans<nums.size()&&nums[ans] == target)result[0] = ans;
//        else return vector{-1,-1};

//        //二分查找找右面
//        left = 0;
//        right = nums.size()-1;
//        ans = nums.size();
//        while(left<=right){
//            middle = (right+left)/2;
//            if(nums[middle]<=target){
//                left = middle+1;

//            }else{
//                right = middle-1;
//                ans = right;
//            }
//        }
//        if(ans==nums.size()&&nums[ans-1]==target) result[1] = ans-1;
//        else if(ans>=0&&ans<nums.size()&&nums[ans] == target)result[1] = ans;
//        else return vector{-1,-1};

//        return result;
//    }
//};
