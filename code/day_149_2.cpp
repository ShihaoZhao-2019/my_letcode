/**
一只青蛙一次可以跳上1级台阶，也可以跳上2级台阶。求该青蛙跳上一个 n 级的台阶总共有多少种跳法。

答案需要取模 1e9+7（1000000007），如计算初始结果为：1000000008，请返回 1。

*/
#include<iostream>
#include<stack>

int numWays(int n)
{
    if(n==0)return 1;
    if(n==1)return 1;
    if(n==2)return 2;
    int pre = 2;
    int pre_pre = 1;
    int result;
    for(int i=3;i<=n;i++)
    {
        result = (pre_pre + pre) % 1000000007;
        pre_pre = pre;
        pre = result;
    }
    return result;
}

int main()
{
    return 0;
}

/**
 * 动态规划,状态转移方程f(0) = 0,f(1) = 1, f(2) = 2 ，f（n） = f(n-1) + f(n-2);
*/