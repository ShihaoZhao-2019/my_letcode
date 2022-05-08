/*
给定一个字符串 s ，验证 s 是否是 回文串 ，只考虑字母和数字字符，可以忽略字母的大小写。

本题中，将空字符串定义为有效的 回文串 。
*/
#include<iostream>
#include<vector>
using namespace std;
//class Solution {
//public:
//    bool isPalindrome(string s) {
//        int length = s.length();
//        int flag = 1;
//        for(int i=0,j=length-1;i<=j;++i,--j)
//        {

//            while(i<length&&(s.at(i)<'0'||(s.at(i)>'9'&&s.at(i)<'A')||(s.at(i)>'Z'&&s.at(i)<'a')||s.at(i)>'z'))i++;
//            while(j>-1&&(s.at(j)<'0'||(s.at(j)>'9'&&s.at(j)<'A')||(s.at(j)>'Z'&&s.at(j)<'a')||s.at(j)>'z'))j--;
//            if(i>j)break;
//            if(s.at(i)>='a'&&s.at(i)<='z')s.at(i)-=0x20;
//            if(s.at(j)>='a'&&s.at(j)<='z')s.at(j)-=0x20;
//            if(s.at(i) != s.at(j))
//            {
//                flag = 0;
//                break;
//            }
//        }
//        return flag;
//    }


//};


//int main()
//{
//    string a = " ";
//    Solution b;
//    cout<<b.isPalindrome(a);
//    return 0;
//}
