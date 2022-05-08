/*
给你一个包含 n 个整数的数组 nums，判断 nums 中是否存在三个元素 a，b，c ，使得 a + b + c = 0 ？请你找出所有和为 0 且不重复的三元组。

注意：答案中不可以包含重复的三元组。

作者：力扣 (LeetCode)
链接：https://leetcode-cn.com/leetbook/read/top-interview-questions-medium/xvpj16/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
*/

//#include <ext/hash_map>
//using namespace __gnu_cxx;
//class Solution {
//public:
//    /****
//    *解决思路：遍历整个数组得到每一个vaule，再从剩下中找两个数其和为 -vaule
//    *
//    *****/

//    vector<vector<int>> thridZero(vector<int>& nums,int VauleIndex,vector<int>& visit)
//    {
//        vector<vector<int>> result;
//        hash_map<int, vector<int>> mymap;
//        for(int i=0;i<nums.size();i++)
//        {
//            //哈希表：用值来查找key
//            if(mymap.find(nums[i]) == mymap.end())
//            {
//                vector<int> temp;
//                mymap[nums[i]] = temp;
//            }
//            mymap[nums[i]].push_back(i);
//        }

//        //开始寻找两数相加等-vaule的值
//        int sum = -nums[VauleIndex];

//        vector<int> visitSum(nums.size(),0);
//        visitSum[VauleIndex] = 1;
//        for(int i=0;i<nums.size();i++)
//        {
//            //因为一个三元组内的数不能相同，所以直接跳过
//            if(i==VauleIndex)continue;
//            int err = sum - nums[i] ;
//            if(mymap.find(err)!= mymap.end() && mymap[err].size()>0 && mymap[err].back()!=i &&mymap[err].back()!=VauleIndex
//            &&visitSum[i]==0 && visitSum[mymap[err].back()]==0)
//            {
//                vector<int> triGroup;
//                triGroup.push_back(nums[VauleIndex]);
//                triGroup.push_back(nums[i]);
//                triGroup.push_back(nums[mymap[err].back()]);

//                //加入三元组的值，主逻辑可以直接跳过
//                visit[i]  = 1;
//                visit[mymap[err].back()]  = 1;
//                visit[VauleIndex]  = 1;

//                visitSum[i] = 1;
//                visitSum[mymap[err].back()] = 1;

//                mymap[err].pop_back();
//                result.push_back(triGroup);
//            }
//        }
//        return result;
//    }
//    vector<vector<int>> threeSum(vector<int>& nums) {
//        vector<vector<int>> result;
//        vector<int> visit(nums.size(),0);
//        for(int i=0;i<nums.size();i++)
//        {
//            if(visit[i]==1)continue;
//            vector<vector<int>> temp = thridZero(nums,i,visit);
//            result.insert(result.end(),temp.begin(),temp.end());
//        }
//        return result;
//    }
//};
