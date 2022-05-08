/*
颠倒给定的 32 位无符号整数的二进制位。

提示：

请注意，在某些语言（如 Java）中，没有无符号整数类型。在这种情况下，输入和输出都将被指定为有符号整数类型，并且不应影响您的实现，因为无论整数是有符号的还是无符号的，其内部的二进制表示形式都是相同的。
在 Java 中，编译器使用二进制补码记法来表示有符号整数。因此，在 示例 2 中，输入表示有符号整数 -3，输出表示有符号整数 -1073741825。

作者：力扣 (LeetCode)
链接：https://leetcode-cn.com/leetbook/read/top-interview-questions-easy/xnc5vg/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
*/

//class Solution {
//public:
//    uint32_t reverseBits(uint32_t n) {
//        uint32_t result = 0;
//        for(int i=0;i<32;i++)
//        {
//            if(n%2==0)
//            {
//                result &= 0xfffffffe;
//            }
//            else
//            {
//                result |= 0x00000001;
//            }
//            n = n>>1;
//            if(i<31)result = result <<1;

//        }
//        return result;
//    }
//};



//分治卡
//class Solution {
//private:
//    uint32_t m1 = 0b01010101010101010101010101010101;
//    uint32_t m2 = 0b00110011001100110011001100110011;
//    uint32_t m3 = 0b00001111000011110000111100001111;
//    uint32_t m4 = 0b00000000111111110000000011111111;
//    uint32_t m5 = 0b00000000000000001111111111111111;
//public:
//    uint32_t reverseBits(uint32_t n) {
//        uint32_t result = n;
//        result = (result>>1)&m1 | (result&m1)<<1;
//        result = (result>>2)&m2 | (result&m2)<<2;
//        result = (result>>4)&m3 | (result&m3)<<4;
//        result = (result>>8)&m4 | (result&m4)<<8;
//        result = (result>>16)&m5 | (result&m5)<<16;
//        return result;
//    }
//};
