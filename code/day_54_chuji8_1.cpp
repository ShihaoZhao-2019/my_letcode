/*
给你一个整数数组 nums ，设计算法来打乱一个没有重复元素的数组。

实现 Solution class:

Solution(int[] nums) 使用整数数组 nums 初始化对象
int[] reset() 重设数组到它的初始状态并返回
int[] shuffle() 返回数组随机打乱后的结果

作者：力扣 (LeetCode)
链接：https://leetcode-cn.com/leetbook/read/top-interview-questions-easy/xn6gq1/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
*/

//class Solution {
//public:
//    vector<int> arrayOrigin;
//    vector<int> arrayShuttle;
//    Solution(vector<int>& nums) {
//        arrayOrigin = nums;
//        arrayShuttle = nums;
//    }

//    vector<int> reset() {
//        arrayShuttle = arrayOrigin;
//        return arrayShuttle;
//    }

//    void swap(int &a,int &b)
//    {
//        int temp = a;
//        a = b;
//        b = temp;
//    }
//    vector<int> shuffle() {
//        int randIndex;
//        for(int i=0;i<arrayShuttle.size();i++)
//        {
//            randIndex = rand()%arrayShuttle.size();
//            swap(arrayShuttle[i],arrayShuttle[randIndex]);
//        }
//        return arrayShuttle;
//    }
//};

///**
// * Your Solution object will be instantiated and called as such:
// * Solution* obj = new Solution(nums);
// * vector<int> param_1 = obj->reset();
// * vector<int> param_2 = obj->shuffle();
// */
