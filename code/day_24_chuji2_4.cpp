/*
给定一个整数数组，判断是否存在重复元素。

如果存在一值在数组中出现至少两次，函数返回 true 。如果数组中每个元素都不相同，则返回 false 。
*/

//#include <ext/hash_map>
//using namespace __gnu_cxx;

//class Solution {

//public:
//    bool containsDuplicate(vector<int>& nums) {
//        hash_map<int,int> mymap;
//        int result = 0;
//        for(int i=0;i<nums.size();i++)
//        {
//            if(mymap.find(nums[i])==mymap.end())
//            mymap[nums[i]] = i;
//            else result = 1;
//        }
//        return result;
//    }
//};
