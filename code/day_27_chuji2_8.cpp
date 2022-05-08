/*
给定一个数组 nums，编写一个函数将所有 0 移动到数组的末尾，同时保持非零元素的相对顺序。

请注意 ，必须在不复制数组的情况下原地对数组进行操作。
*/

//class Solution {
//public:
//    void swap(int &a,int &b)
//    {
//        int c = a;
//        a = b;
//        b = c;
//    }
//    void moveZeroes(vector<int>& nums) {
//        //先找到第一个为0的元素，再找到0之后第一个不是0的元素
//        int i;
//        for(i = 0;i<nums.size();++i)
//            if(nums[i]==0) break;
//        if(i>= nums.size()-1) return;

//        int j;
//        for(j=i+1;j<nums.size();++j)
//            if(nums[j]!=0) break;
//        while(j<nums.size())
//        {
//            swap(nums[i++],nums[j++]);
//            while(j<nums.size()&&nums[j]==0)++j;
//        }

//    }
//};
