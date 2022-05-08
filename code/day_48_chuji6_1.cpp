/*
给你两个按 非递减顺序 排列的整数数组 nums1 和 nums2，另有两个整数 m 和 n ，分别表示 nums1 和 nums2 中的元素数目。

请你 合并 nums2 到 nums1 中，使合并后的数组同样按 非递减顺序 排列。

注意：最终，合并后数组不应由函数返回，而是存储在数组 nums1 中。为了应对这种情况，nums1 的初始长度为 m + n，其中前 m 个元素表示应合并的元素，后 n 个元素为 0 ，应忽略。nums2 的长度为 n 。

作者：力扣 (LeetCode)
链接：https://leetcode-cn.com/leetbook/read/top-interview-questions-easy/xnumcr/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
*/

//class Solution {
//public:
//    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//        int p = m-1;
//        int q = n-1;
//        int i = nums1.size()-1;
//        while(p>=0&&q>=0)
//        {
//            if(nums1[p]>nums2[q])
//            {
//                nums1[i--] = nums1[p--];
//            }else
//            {
//                nums1[i--] = nums2[q--];
//            }
//        }
//        while(p>=0)
//        {
//            nums1[i--] = nums1[p--];
//        }
//        while(q>=0)
//        {
//            nums1[i--] = nums2[q--];
//        }
//    }
//};
