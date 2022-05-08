/*
两个数组的交集 II
给定两个数组，编写一个函数来计算它们的交集。



示例 1：

输入：nums1 = [1,2,2,1], nums2 = [2,2]
输出：[2,2]
示例 2:

输入：nums1 = [4,9,5], nums2 = [9,4,9,8,4]
输出：[4,9]

作者：力扣 (LeetCode)
链接：https://leetcode-cn.com/leetbook/read/top-interview-questions-easy/x2y0c2/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
*/


//class Solution {
//public:
//    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
//        sort(nums1.begin(),nums1.end());
//        sort(nums2.begin(),nums2.end());
//        // for(int i=0;i<nums1.size();i++) cout<<nums1[i]<<endl;
//        int i=0;
//        int j=0;
//        vector<int> result;
//        while(i<nums1.size()&&j<nums2.size())
//        {
//            if(nums1[i]==nums2[j])
//            {
//                result.push_back(nums1[i]);
//                i++;
//                j++;
//            }else if(nums1[i]<nums2[j]) i++;
//            else j++;

//        }
//        return result;

//    }
//};
