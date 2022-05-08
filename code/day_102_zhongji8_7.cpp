/*
给定两个整数，分别表示分数的分子 numerator 和分母 denominator，以 字符串形式返回小数 。

如果小数部分为循环小数，则将循环的部分括在括号内。

如果存在多个答案，只需返回 任意一个 。

对于所有给定的输入，保证 答案字符串的长度小于 104 。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/fraction-to-recurring-decimal
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/


//#include<ext/hash_map>
//using namespace __gnu_cxx;
//class Solution {
//public:
//    string fractionToDecimal(int numerator, int denominator) {
//        string result;
//        long newNumeraator = numerator;
//        long newDenominator = denominator;
//        hash_map<int,int> modMap;
//        bool flag = 0;
//        if(numerator==0)return "0";
//        if(newNumeraator<0){
//            newNumeraator = -newNumeraator;
//            flag = !flag;
//        }
//        if(denominator<0){
//            newDenominator = -newDenominator;
//            flag = !flag;
//        }
//        if(flag)result = "-" + result;
//        long div = newNumeraator/newDenominator;
//        long mod = newNumeraator%newDenominator;
//        result += to_string(div);
//        if(mod>0)result += ".";
//        else return result;
//        int pointIndex = result.length();
//        while(mod>0){
//            newNumeraator = mod<<3;
//            newNumeraator += mod;
//            newNumeraator += mod;
//            div = newNumeraator/newDenominator;
//            mod = newNumeraator%newDenominator;
//            result +=to_string(div);
//            if(modMap.find(mod)==modMap.end())modMap[mod] = result.length();
//            else break;

//        }
//        if(mod>0){
//            result.insert(modMap[mod],"(");
//            result += ")";
//        }
//        return result;

//    }
//};
