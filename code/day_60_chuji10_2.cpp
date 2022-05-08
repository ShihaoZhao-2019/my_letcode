/*
两个整数之间的 汉明距离 指的是这两个数字对应二进制位不同的位置的数目。

给你两个整数 x 和 y，计算并返回它们之间的汉明距离。
*/

//class Solution {
//public:
//    int hammingDistance(int x, int y) {
//        unsigned int temp = x^y;
//        int result = 0;
//        for(int i=0;i<32;i++)
//        {
//            if(temp%2==1)result++;
//            temp = temp>>1;
//        }
//        return result;
//    }
//};
