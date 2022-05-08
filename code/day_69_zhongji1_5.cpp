/*
给你一个字符串 s，找到 s 中最长的回文子串。


有时间看看别的方法
*/

//class Solution {
//public:
//    //方法1中心扩散法
//    string longestPalindrome(string s) {
//    int maxLeft = 0;
//    int maxRight = 0;
//    for(int i = 0;i<s.length();i++)
//    {
//        int left= i;
//        int right = i;
//        //首先去掉中间重复的
//        while(right<s.length()-1&&s[right]==s[right+1])right++;
//        left--;
//        right++;

//        while(left>=0&&right<=s.length()-1)
//        {
//            if(s[left]==s[right])
//            {
//                left--;
//                right++;
//            }else break;
//        }
//        left++;
//        right--;
//        if(right-left+1>maxRight-maxLeft+1)
//        {
//            maxLeft = left;
//            maxRight = right;
//        }
//         if(s.length()-i+1<(maxRight-maxLeft+1)/2)break;
//    }

//    string result;
//    // cout<<maxLeft<<endl<<maxRight<<endl;
//    result.assign(s.begin()+maxLeft,s.begin()+maxRight+1);

//    return result;
//    }
//};
