/*
给定一个数组，将数组中的元素向右移动 k 个位置，其中 k 是非负数。

进阶：

尽可能想出更多的解决方案，至少有三种不同的方法可以解决这个问题。
你可以使用空间复杂度为 O(1) 的 原地 算法解决这个问题吗？

作者：力扣 (LeetCode)
链接：https://leetcode-cn.com/leetbook/read/top-interview-questions-easy/x2skh7/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
*/

//class Solution {
//public:
//    void swap(int &a,int &b)
//    {
//        int c = a;
//        a = b;
//        b = c;
//    }
//    void reverse(vector<int>& nums,int begin,int end)
//    {
//        if(begin>=end) return ;
//        while(begin<end) swap(nums[begin++],nums[end--]);

//    }
//    void rotate(vector<int>& nums, int k) {
//        k = k % nums.size();
//        reverse(nums,0,nums.size()-k-1);
//        reverse(nums,nums.size()-k,nums.size()-1);
//        reverse(nums,0,nums.size()-1);
//    void rotate(vector<int>& nums, int k)
//    {
//        k = k % nums.size();
//        vector<int> array(k);
//        for(int i=nums.size()-k,j=0;i<nums.size();i++,j++)array[j] = nums[i];
//        for(int i=nums.size()-k-1;i>=0;i--)nums[i+k] = nums[i];
//        for(int i=0;i<k;i++)nums[i] = array[i];
//    }
//    }
//};
