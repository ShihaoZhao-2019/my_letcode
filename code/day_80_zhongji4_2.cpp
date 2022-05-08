/*
数字 n 代表生成括号的对数，请你设计一个函数，用于能够生成所有可能的并且 有效的 括号组合。
*/

//class Solution {
//public:
//    void myDfs(vector<string> &result,string str,int right,int n){
//        if(right == 0 && n==0){
//            result.push_back(str);
//            return ;
//        }
//        if(n>0)myDfs(result,str+"(",right+1,n-1);
//        if(right>0)myDfs(result,str+")",right-1,n);
//    }
//    vector<string> generateParenthesis(int n) {
//        vector<string> result;
//        myDfs(result,"",0,n);
//        return result;
//    }
//};
