/*
递增的三元子序列
给你一个整数数组 nums ，判断这个数组中是否存在长度为 3 的递增子序列。

如果存在这样的三元组下标 (i, j, k) 且满足 i < j < k ，使得 nums[i] < nums[j] < nums[k] ，返回 true ；否则，返回 false 。

作者：力扣 (LeetCode)
链接：https://leetcode-cn.com/leetbook/read/top-interview-questions-medium/xvvuqg/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
*/

//class Solution {
//public:
//    bool increasingTriplet(vector<int>& nums) {
//        int min = 0x7fffffff;
//        int middle = 0x7fffffff;
//        //遍历数组，如果比min小更新min，否则更新middle，当比两者都大的时候返回1
//        for(auto number : nums)
//        {
//            if(number<=min)
//            {
//                min = number;
//            }else if(number<=middle)
//            {
//                middle = number;
//            }else
//            {
//                return 1;
//            }
//        }
//        return 0;

//    }
//};
