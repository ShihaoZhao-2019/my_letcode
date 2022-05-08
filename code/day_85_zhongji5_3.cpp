/*
给定整数数组 nums 和整数 k，请返回数组中第 k 个最大的元素。

请注意，你需要找的是数组排序后的第 k 个最大的元素，而不是第 k 个不同的元素。
*/

//class Solution {
//public:
//    int quicksort(vector<int>& nums,int start,int end,int k){
//        // if(start>=end) return;
//        int i = start;
//        int j = end;
//        int temp = nums[start];

//        while(i<j)
//        {
//            while(i<j&&nums[j]>=temp)j--;
//            if(i<j)
//            {
//                nums[i] = nums[j];
//                i++;
//            }
//             while(i<j&&nums[i]<=temp)i++;
//            if(i<j)
//            {
//                nums[j] = nums[i];
//                j--;
//            }

//        }
//        nums[i] = temp;
//        if(nums.size()-i == k)return nums[i];
//        else if(nums.size()-i < k) return quicksort(nums,start,i-1,k);
//        else return quicksort(nums,i+1,end,k);
//}
//    //方法1
//    int findKthLargest2(vector<int>& nums, int k) {
//        return quicksort(nums,0,nums.size()-1,k);
//    }
//    //方法2
//    int findKthLargest(vector<int>& nums, int k) {
//        sort(nums.begin(),nums.end());
//        return nums[nums.size()-k];
//    }
//};
