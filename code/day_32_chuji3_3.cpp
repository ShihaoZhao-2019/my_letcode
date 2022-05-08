/*
给定一个字符串，验证它是否是回文串，只考虑字母和数字字符，可以忽略字母的大小写。

说明：本题中，我们将空字符串定义为有效的回文串。
*/


//class Solution {
//public:
//    bool isPalindrome(string s) {
//        bool result = 1;
//        int i = 0;
//        int j = s.length()-1;
//        if(j<0)return 1;
//        while(i<j&&result)
//        {
//            char left = s[i];
//            while(i<j&&((left<'A'||left>'Z')&&(left<'a'||left>'z')&&(left<'0'||left>'9')))
//            {
//               i++;
//               left = s[i];
//            }

//            char right = s[j];
//           while(i<j&&((right<'A'||right>'Z')&&(right<'a'||right>'z')&&(right<'0'||right>'9')))
//           {
//               j--;
//               right = s[j];
//           }

//                left = s[i++];
//                right = s[j--];
//                // cout<<i<<left<<','<<'<<'<<right<<endl;
//                left = left>='a'?left-'a':left-'A';
//                right = right>='a'?right-'a':right-'A';
//                if(left!=right) result = 0;

//        }
//        return result;
//    }
//};
