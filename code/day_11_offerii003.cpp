/*
给定一个非负整数 n ，请计算 0 到 n 之间的每个数字的二进制表示中 1 的个数，并输出一个数组。
*/

#include<iostream>
#include<vector>

//暴力解法
//class Solution {
//public:
//    vector<int> countBits(int n) {
//        vector<int> result;
//        for(int i = 0;i<=n;i++)
//        {
//            result.push_back(0);
//            for(int j=0;j<32;j++)
//            {
//                if((i>>j)&0x00000001)
//                    result.at(i)++;
//            }

//        }
//        return result;

//    }
//};
//动态规划
//class Solution {
//public:
//    vector<int> countBits(int n) {
//        vector<int> result(n+1);

//        for(int i=0;i<=n;i++)
//        {
//            int num = result.at(i>>1) + i%2;
//            result.at(i) = num;
//        }
//        return result;
//    }
//};
