#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    typedef struct HASH_NODE
    {
     unsigned int flag;
     long element;
     int index;
    }HASH_NODE;

    void build_hash_map(vector<HASH_NODE> &hash_map,int p,vector<int> elements) {
    int map_addr;
    for(int i = 0;i<hash_map.size();++i)hash_map[i].flag=0;
    for(int i = 0;i<elements.size();i++)
    {
        if (elements[i]<0)map_addr = (elements[i] + 4294967296 )%p;
        else map_addr = elements[i]%p;

        while(hash_map[map_addr].flag){
            ++map_addr;
            map_addr = map_addr % hash_map.size();
        }
        hash_map[map_addr].flag = 1;
        hash_map[map_addr].element = elements[i];
        hash_map[map_addr].index = i;


    }
    }

    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        vector<HASH_NODE> hash_map(20000);
        int p = 19997;

        build_hash_map(hash_map,p,nums);
        int err;
        int map_addr;
        for(int i = 0;i<nums.size();i++)
        {
            err =  target-nums[i];
            if(err<0) map_addr = (err + 4294967296)%p;
            else map_addr = err%p;
            while(hash_map[map_addr].flag && err!=hash_map[map_addr].element)
            {
                ++map_addr;
                map_addr = map_addr % hash_map.size();

            }


            if(hash_map[map_addr].flag == 0||hash_map[map_addr].index==i) continue;
            else{
                result.push_back(i);
                result.push_back(hash_map[map_addr].index);
                break;
            }
        }
        return result;


    }
};
//int main()
//{
//    vector<int> nums;
//    nums.push_back(3);
//    nums.push_back(2);
//    nums.push_back(95);
//    nums.push_back(4);
//    nums.push_back(-3);
//    Solution solution;
//    vector<int> result = solution.twoSum(nums,92);
//    cout<<result[0]<<result[1];

//    return 0;
//}
//class Solution {
//public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//        vector<int> result;
//        for(int i=0;i<nums.size()-1;i++)
//            for(int j=i+1;j<nums.size();j++)
//                if(target==nums[i]+nums[j])
//                {
//                    result.push_back(i);
//                    result.push_back(j);
//                    return result;
//                }
//     return result;
//    }
//};
