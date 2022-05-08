/*
给你一个整数数组 nums 和一个整数 k ，请你返回其中出现频率前 k 高的元素。你可以按 任意顺序 返回答案。
*/


//#include <ext/hash_map>
//using namespace __gnu_cxx;
//typedef struct FREQ{
//    int key;
//    int frequent;
//}freq;
//auto SortByM1( const freq &v1, const freq &v2)
//{
//    return v1.frequent > v2.frequent;//降序排列
//}
//auto SortByM2 = [](freq &v1,freq &v2){ return v1.frequent > v2.frequent; };
//class Solution {
//public:
//    vector<int> topKFrequent(vector<int>& nums, int k) {
//        vector<int> result;
//        hash_map<int,int> frequent;
//        for(auto num:nums){
//            if(frequent.find(num)==frequent.end()){
//                frequent[num] = 1;
//            }else{
//                frequent[num]++;
//            }
//        }
//        vector<freq> myNums;
//        for(auto i=frequent.begin();i!=frequent.end();i++){
//            // cout<<(*i).first<<"   "<<(*i).second<<endl;
//            freq temp;
//            temp.key = (*i).first;
//            temp.frequent = (*i).second;
//            myNums.push_back(temp);
//        }
//        sort(myNums.begin(),myNums.end(),SortByM1);
//        for(int i=0;i<k;i++){
//            result.push_back(myNums[i].key);
//        }

//        return result;

//    }
//};
