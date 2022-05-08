/*
给你一个非负整数 x ，计算并返回 x 的 算术平方根 。

由于返回类型是整数，结果只保留 整数部分 ，小数部分将被 舍去 。

注意：不允许使用任何内置指数函数和算符，例如 pow(x, 0.5) 或者 x ** 0.5

作者：力扣 (LeetCode)
链接：https://leetcode-cn.com/leetbook/read/top-interview-questions-medium/xwrzwc/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
*/

//class Solution {
//public:
//    int mySqrt(int x) {
//        int left = 0;
//        int right = x;
//        int ans;
//        while(left<=right){
//            long long middle = (left + right)/2;
//            long long temp = middle*middle;
//            if(temp==(long long)x) return middle;
//            else if(temp > x){
//                right = middle - 1;

//            }else{
//                left = middle + 1;
//            }
//        }
//        return right;
//    }
//};
