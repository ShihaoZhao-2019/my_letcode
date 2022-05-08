/*
编写一个函数来查找字符串数组中的最长公共前缀。

如果不存在公共前缀，返回空字符串 ""。
*/

//class Solution {
//public:
//    string longestCommonPrefix(vector<string>& strs) {
//        int flag=1;
//        int result=-1;
//        if(strs[0]=="")return "";
//        while(flag)
//        {
//            result++;
//            char temp=strs[0][result];
//            for(string str:strs)
//            {
//                if(result>=str.length()||str[result]!=temp)
//                {
//                    flag=0;
//                    break;
//                }
//            }
//        }
//        result--;
//        string resultStr;
//        if(result==-1)
//        {

//            return "";
//        }
//        vector<unsigned char> resultVector(result+1);
//        for(int i=0;i<=result;i++)
//        {
//            resultVector[i]=strs[0][i];
//        }

//                 resultStr.assign(resultVector.begin(),resultVector.end());
//        return resultStr;

//        }
//};
