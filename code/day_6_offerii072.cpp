/*
给定一个非负整数 x ，计算并返回 x 的平方根，即实现 int sqrt(int x) 函数。

正数的平方根有两个，只输出其中的正数平方根。

如果平方根不是整数，输出只保留整数的部分，小数部分将被舍去。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/jJ0w9p
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Solution {
public:
    int mySqrt(int x) {
        for(long int i=1;;i++)if(i*i>x)return i-1;
    }
};

//注意这里计算中值的时候要+1，取右面的时候要-1
class Solution2 {
public:
    int mySqrt(int x) {
        long start = 0;
        long end = x;
        long mid;
        while(start<end)
        {
            mid = (start + end +1 )/2;
            if(mid*mid==x)return mid;
            else if(mid*mid>x)end = mid-1;
            else start = mid;

        }
         return start;
    }
};
//int main()
//{
//    Solution2 a;
//    cout<<a.mySqrt(8);
//    return 0;
//}
