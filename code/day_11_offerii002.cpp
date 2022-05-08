/*
给定两个 01 字符串 a 和 b ，请计算它们的和，并以二进制字符串的形式输出。

输入为 非空 字符串且只包含数字 1 和 0。
*/

//class Solution {
//public:
//    void reverse(string &str){
//        int i = 0;
//        int j = str.length()-1;
//        while(i<j)
//        {
//            int temp = str.at(i);
//            str.at(i) = str.at(j);
//            str.at(j) = temp;
//            i++;j--;
//        }

//    }
//    string addBinary(string a, string b) {
//        int indexA = a.length()-1;
//        int indexB = b.length()-1;
//        string result;
//        int up = 0;
//        int temp = 0;
//        while(indexA>=0||indexB>=0)
//        {
//            if(indexA>=0&&indexB>=0)
//            {
//                temp = a[indexA]-'0' + b[indexB] - '0' + up;

//            }else if(indexA>=0)
//            {
//                temp = a[indexA]-'0'   + up;

//            }else if(indexB>=0)
//            {
//                temp = b[indexB] - '0' + up;
//            }
//            switch(temp)
//                {
//                    case 0:result.push_back('0');up=0;break;
//                    case 1:result.push_back('1');up=0;break;
//                    case 2:result.push_back('0');up=1;break;
//                    case 3:result.push_back('1');up=1;break;
//                }
//            indexA--;indexB--;
//        }
//        if(up) result.push_back('0'+up);
//        reverse(result);
//        return result;
//   }
//};
