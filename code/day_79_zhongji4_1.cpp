/*
给定一个仅包含数字 2-9 的字符串，返回所有它能表示的字母组合。答案可以按 任意顺序 返回。

给出数字到字母的映射如下（与电话按键相同）。注意 1 不对应任何字母

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/letter-combinations-of-a-phone-number
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/


//class Solution {
//public:
//    vector<string> wordMap;
//public:
//    Solution(){
//        wordMap.push_back("abc");
//        wordMap.push_back("def");
//        wordMap.push_back("ghi");
//        wordMap.push_back("jkl");
//        wordMap.push_back("mno");
//        wordMap.push_back("pqrs");
//        wordMap.push_back("tuv");
//        wordMap.push_back("wxyz");
//    }
//    void myLetterCombinations(string digits,int layer,int n,vector<string> &result){
//        vector<string> newRsult;
//        if(layer==n) return ;
//        if(layer==0){
//            for(auto ch : wordMap[digits[0]-'2']){
//                newRsult.push_back(string(1,ch));
//            }
//        }else{
//            for(auto &str : result){
//                for(auto ch : wordMap[digits[layer]-'2']){
//                    newRsult.push_back(str + string(1,ch));
//                }
//            }
//        }
//        result = newRsult;
//        myLetterCombinations(digits,layer+1,n,result);

//    }
//    vector<string> letterCombinations(string digits) {
//        vector<string>  result;
//        myLetterCombinations(digits,0,digits.length(),result);
//        return result;
//    }
//};
