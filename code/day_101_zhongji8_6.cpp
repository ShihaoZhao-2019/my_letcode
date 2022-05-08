/*
给定两个整数，被除数 dividend 和除数 divisor。将两数相除，要求不使用乘法、除法和 mod 运算符。

返回被除数 dividend 除以除数 divisor 得到的商。

整数除法的结果应当截去（truncate）其小数部分，例如：truncate(8.345) = 8 以及 truncate(-2.7335) = -2

作者：力扣 (LeetCode)
链接：https://leetcode-cn.com/leetbook/read/top-interview-questions-medium/xwp6vi/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
*/


//class Solution {
//public:
//    int divide(int dividend, int divisor) {
//        if(divisor==0)return 0;
//        if(dividend == 0x80000000){
//            if(divisor==1)return dividend;
//            if(divisor==-1)return 0x07fffffff;
//        }
//        bool flag = 0;
//        if(dividend>0){
//            flag = !flag;
//            dividend = -dividend;
//        }
//        if(divisor>0){
//            flag = !flag;
//            divisor = -divisor;
//        }

//        vector<int> temp = {divisor};

//        while(temp.back() >= dividend-temp.back())temp.push_back(temp.back()+temp.back());
//        int res = 0;
//        for(int i=temp.size()-1;i>=0;--i){
//            if(temp[i]>=dividend){
//                res += (1<<i);
//                dividend -=temp[i];
//            }
//        }
//        return flag==0?res:-res;
//    }
//};
