#include <iostream>
#include <ext/hash_map>
#include <string>
using namespace __gnu_cxx;
using namespace std;
//class Solution {
//public:
//    vector<int> twoSum(vector<int>& numbers, int target) {
//        vector<int> result;
//        hash_map<int, int> mymap;
//        for(int i = 0;i<numbers.size();i++)
//        {
//            mymap[numbers[i]] = i;
//        }
//        for(int i = 0;i<numbers.size();i++)
//        {
//            if((mymap.find(target - numbers[i]) != mymap.end())&&(i!=mymap[target - numbers[i]]))
//            {
//                result.push_back(i);
//                result.push_back(mymap[target - numbers[i]]);
//                break;
//            }
//        }
//        return result;
//    }
//};

//class Solution {
//public:
//    vector<int> twoSum(vector<int>& numbers, int target) {
//        vector<int > result;
//        int i = 0;
//        int j = numbers.size()-1;
//        while(i<j)
//        {
//            if(numbers[i] + numbers[j] == target)
//            {
//                result.push_back(i);
//                result.push_back(j);
//                break;
//            }else if(numbers[i] + numbers[j] > target) j--;
//            else i++;
//        }
//        return result;

//    }
//};

