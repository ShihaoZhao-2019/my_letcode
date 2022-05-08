/*
给定一个排序的整数数组 nums 和一个整数目标值 target ，请在数组中找到 target ，并返回其下标。如果目标值不存在于数组中，返回它将会被按顺序插入的位置。

请必须使用时间复杂度为 O(log n) 的算法。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/N6YdxV
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/
//#include<iostream>
//#include<vector>
//using namespace std;
//class Solution {
//    class Solution {
//    public:
//        int searchInsert(vector<int>& nums, int target) {
//            int start = 0;
//            int end = nums.size()-1;

//            if(nums[end]<target) return end+1;
//            if(nums[start]>target) return 0;
//            if(nums.size() == 1) return 0;

//            int mid = (start + end) / 2;
//            while(start<end)
//            {
//                if(nums[mid] == target) break;
//                else if(nums[mid] > target)end = mid-1;
//                else start = mid+1;
//                mid = (start + end) / 2;
//            }
//            if(target>nums[mid])return mid + 1;
//            return mid;
//        }
//    };

//}
//int main()
//{
//    vector<int> nums;
//    nums.push_back(1);
//    nums.push_back(3);
//    nums.push_back(5);
//    nums.push_back(6);
//    Solution a;
//    cout<<a.searchInsert(nums,2)<<endl;
//    return 0 ;
//}
