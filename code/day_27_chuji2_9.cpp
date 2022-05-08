/*
给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出 和为目标值 target  的那 两个 整数，并返回它们的数组下标。

你可以假设每种输入只会对应一个答案。但是，数组中同一个元素在答案里不能重复出现。

你可以按任意顺序返回答案。

作者：力扣 (LeetCode)
链接：https://leetcode-cn.com/leetbook/read/top-interview-questions-easy/x2jrse/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
*/

//#include <iostream>
//#include <ext/hash_map>
//using namespace __gnu_cxx;
//using namespace std;
//class Solution {
//public:
//    vector<int> twoSum(vector<int>& nums, int target) {
//        hash_map<int,int> my_map;
//        for(int i=0;i<nums.size();++i)
//        {
//            my_map[nums[i]] = i;
//        }
//        vector<int> result;
//        for(int i=0;i<nums.size();i++)
//        {
//            int err = target-nums[i];
//            if(my_map.find(err) != my_map.end()&&my_map[err]!=i)
//            {
//                result.push_back(i);
//                int index = my_map[err];
//                result.push_back(index);
//                break;
//            }
//        }
//        return result;
//    }
//};
