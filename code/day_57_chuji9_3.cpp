/*
给定一个整数，写一个函数来判断它是否是 3 的幂次方。如果是，返回 true ；否则，返回 false 。

整数 n 是 3 的幂次方需满足：存在整数 x 使得 n == 3x

作者：力扣 (LeetCode)
链接：https://leetcode-cn.com/leetbook/read/top-interview-questions-easy/xnsdi2/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
*/


//class Solution {
//public:
//    bool isPowerOfThree(int n) {
//        long long  temp = 1;
//        int result = 0;
//        while(temp<=n)
//        {

//            if(temp == n)
//            {
//                result = 1;
//                break;
//            }
//            temp *=3;
//        }
//        return result;
//    }
//};
