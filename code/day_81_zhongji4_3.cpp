/*
全排列
*/
//auto mySwap = [](int &a,int &b){ int temp=a;a=b;b=temp; };
//class Solution {
//public:

//    void myPermute(vector<vector<int>> &result,vector<int>& nums,int layer,int n){
//        if(layer==n){
//            result.push_back(nums);
//            return;
//        }
//        for(int i = layer;i<n;i++){
//            mySwap(nums[i],nums[layer]);
//            myPermute(result,nums,layer+1,n);
//            mySwap(nums[i],nums[layer]);
//        }
//    }
//    vector<vector<int>> permute(vector<int>& nums) {
//        vector<vector<int>> result;
//        myPermute(result,nums,0,nums.size());
//        return result;
//    }
//};
