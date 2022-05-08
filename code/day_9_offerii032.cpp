/*
给定两个字符串 s 和 t ，编写一个函数来判断它们是不是一组变位词（字母异位词）。

注意：若 s 和 t 中每个字符出现的次数都相同且字符顺序不完全相同，则称 s 和 t 互为变位词（字母异位词）。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/dKk3P7
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/
//#include<iostream>
//#include<vector>
//using namespace std;

//class Solution {
//public:
//    void quickSort(string &str,int start,int end)
//    {

//     if(start>=end)return;
//     int temp = str.at(start);
//     int i = start;
//     int j = end;
//     while(i<j)
//     {
//         while(i<j&&str.at(j)>=temp) j--;
//         if(i<j)
//         {
//             str.at(i) = str.at(j);
//             i++;
//         }
//         while(i<j&&str.at(i)<=temp) i++;
//         if(i<j)
//         {
//             str.at(j) = str.at(i);
//             j--;
//         }
//     }
//     str.at(i) = temp;
//     quickSort(str,start,i-1);
//     quickSort(str,i+1,end);

//    }
//    bool isAnagram(string s, string t) {
//        string sCopy = s;
//        string tCOpy = t;
//        if(s == t) return 0;
//        if(sCopy.length()!=tCOpy.length())return 0;
//        int length = sCopy.length()-1;
//        quickSort(sCopy,0,length);
//        quickSort(tCOpy,0,length);
//        int i = 0;
//        while(i<=length&&(sCopy.at(i)==tCOpy.at(i)))i++;
//        if(i==sCopy.length()) return 1;
//        else return 0;



//    }
//};
//int main()
//{
//    Solution a;
//    string s = "a";
//    string t = "a";

//    cout<<a.isAnagram(s,t);

//    return 0;
//}
