/*
给定一个正整数 n ，输出外观数列的第 n 项。

「外观数列」是一个整数序列，从数字 1 开始，序列中的每一项都是对前一项的描述。

你可以将其视作是由递归公式定义的数字字符串序列：

countAndSay(1) = "1"
countAndSay(n) 是对 countAndSay(n-1) 的描述，然后转换成另一个数字字符串。

作者：力扣 (LeetCode)
链接：https://leetcode-cn.com/leetbook/read/top-interview-questions-easy/xnpvdm/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
*/
//class Solution {
//public:
//    string countAndSay(int n) {
//        if(n==1)
//        {
//          vector<unsigned char> s(1,'1');
//          string str;
//          str.assign(s.begin(),s.end());
//          return str;
//        }
//       string lastStr = countAndSay(n-1);
//       vector<unsigned char> s;
//       int j=0;
//       for(int i=1;i<lastStr.length();i++)
//       {
//          if(lastStr[i]!=lastStr[i-1])
//          {
//             s.push_back(i-j+'0');
//             s.push_back(lastStr[i-1]);
//             j=i;
//          }
//       }
//       s.push_back(lastStr.length()-j+'0');
//       s.push_back(lastStr[lastStr.length()-1]);
//       string result;
//       result.assign(s.begin(),s.end());
//       return result;


//    }
//};
