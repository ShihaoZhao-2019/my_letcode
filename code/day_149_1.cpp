/**
 * 两个栈实现一个队列
*/


/**
 * 写一个函数，输入 n ，求斐波那契（Fibonacci）数列的第 n 项（即 F(N)）。斐波那契数列的定义如下：
 * F(0) = 0,   F(1) = 1
 * F(N) = F(N - 1) + F(N - 2), 其中 N > 1.
*/

#include<iostream>
#include<stack>

int fib(int n)
{
    if(n==0)return 0;
    if(n==1)return 1;
    int previous_previous = 0;
    int previous = 1;
    int now;
    for(int i=2;i<=n;i++)
    {
        now = (previous_previous + previous)%1000000007;
        previous_previous = previous;
        previous = now;
    }
    return now;
}

int main()
{
    std::cout<<fib(10);
    return 0;
}

/**
 * 放弃递归的思想，递归的话需要做许多重复计算，采用循环，类似动态规划的方式。并且状态转移方程相当于已经给出。
*/