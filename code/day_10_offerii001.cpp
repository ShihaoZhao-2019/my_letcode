/*
给定两个整数 a 和 b ，求它们的除法的商 a/b ，要求不得使用乘号 '*'、除号 '/' 以及求余符号 '%' 。
注意：

整数除法的结果应当截去（truncate）其小数部分，例如：truncate(8.345) = 8 以及 truncate(-2.7335) = -2
假设我们的环境只能存储 32 位有符号整数，其数值范围是 [−231, 231−1]。本题中，如果除法结果溢出，则返回 231 − 1


来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/xoh6Oh
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

//#include<iostream>
//#include<vector>

//class Solution {
//public:
//    int divide(int a, int b) {
//        if(a == b) return 1;
//        if(a == -b) return -1;
//        int flag = 1;
//        if(a<0&&b<0){a=-a;b=-b;}
//        else if(a<0)
//        {
//            flag = -1;
//            a = -a;
//        }else if(b<0) {
//            flag = -1;
//            b = -b;
//        }

//        int left = 0;
//        int right = a;
//        int mid;
//        int sum = 0;
//        while(left<right)
//        {
//            mid = left + (right - left)/2;
//            sum = 0;
//            for(int i=0;i<mid;i++) sum+=b;
//            if(sum == a)break;
//            else if(sum < a) left = mid;
//            else right = mid;
//            if(right-left <= 1)break;

//        }
//        mid = (left + right)/2;
//        return mid * flag;
//    }
//};

