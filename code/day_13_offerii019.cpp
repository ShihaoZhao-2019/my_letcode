/*
剑指 Offer II 019. 最多删除一个字符得到回文
*/

//class Solution {
//public:
//    bool validPalindrome(string s) {
//        int length = s.length();
//        int i = 0;
//        int j = length-1;
//        bool result = 1;

//        while(i<j && s[i]==s[j])
//        {
//               i++;
//               j--;
//        }
//        if(i>=j) return result;

//        int m = i+1;
//        int n = j;
//        while(m<n && s[m]==s[n])
//        {
//                m++;
//                n--;
//        }

//        if(m>=n) return result;
//        else
//        {
//           m = i;
//           n = j-1;
//            while(m<n && s[m]==s[n])
//            {
//                    m++;
//                    n--;
//            }
//            if(m>=n) return result;
//            else return !result;
//        }




//    }
//};
