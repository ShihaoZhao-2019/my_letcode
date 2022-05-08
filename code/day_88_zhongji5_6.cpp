/*
整数数组 nums 按升序排列，数组中的值 互不相同 。

在传递给函数之前，nums 在预先未知的某个下标 k（0 <= k < nums.length）上进行了 旋转，使数组变为 [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]]（下标 从 0 开始 计数）。例如， [0,1,2,4,5,6,7] 在下标 3 处经旋转后可能变为 [4,5,6,7,0,1,2] 。

给你 旋转后 的数组 nums 和一个整数 target ，如果 nums 中存在这个目标值 target ，则返回它的下标，否则返回 -1 。

作者：力扣 (LeetCode)
链接：https://leetcode-cn.com/leetbook/read/top-interview-questions-medium/xvyz1t/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
*/
//class Solution {
//public:
//    int search(vector<int>& nums, int target) {
//        int left = 0;
//        int right = nums.size()-1;
//        if(left==right ){
//            if(nums[0]==target)return 0;
//            else return -1;
//        }
//        if(left==right-1){
//            if(nums[0]==target)return 0;
//            else if(nums[1]==target)return 1;
//            else return -1;
//        }
//        int middle;
//        while(left<=right){
//            middle= (left+right)/2;

//            if(nums[middle]==target)return middle;
//            else if(nums[left]<=nums[middle-1]&&target>=nums[left]&&target<=nums[middle-1])right=middle-1;
//            else if(nums[left]<=nums[middle-1])left = middle+1;
//            else if(nums[middle+1]<=nums[right]&&target>=nums[middle+1]&&target<=nums[right])left=middle+1;
//            else if(nums[middle+1]<=nums[right])right=middle-1;
//            if(left==right-1||left==right){
//                if(nums[left]==target)return left;
//                else if(nums[right]==target)return right;
//                else return -1;
//            }



//        }
//        return -1;
//    }
//};
