/*
罗马数字包含以下七种字符: I， V， X， L，C，D 和 M。

字符          数值
I             1
V             5
X             10
L             50
C             100
D             500
M             1000

作者：力扣 (LeetCode)
链接：https://leetcode-cn.com/leetbook/read/top-interview-questions-easy/xn4n7c/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
*/



//class Solution {
//public:
//    int getSimpleNumber(char ch,bool minusFlag)
//    {
//        int value = 0;
//        switch (ch)
//        {
//            case('M'):
//            {
//                if(!minusFlag)
//                {
//                    value = 1000;
//                }else
//                {
//                    value = 900;
//                }
//                break;
//            }
//            case('D'):
//            {
//                if(!minusFlag)
//                {
//                    value = 500;
//                }else
//                {
//                    value = 400;
//                }
//                break;
//            }
//            case('C'):
//            {
//                if(!minusFlag)
//                {
//                    value = 100;
//                }else
//                {
//                    value = 90;
//                }
//                break;
//            }
//            case('L'):
//            {
//                if(!minusFlag)
//                {
//                    value = 50;
//                }else
//                {
//                    value = 40;
//                }
//                break;
//            }
//            case('X'):
//            {
//                if(!minusFlag)
//                {
//                    value = 10;
//                }else
//                {
//                    value = 9;
//                }
//                break;
//            }
//            case('V'):
//            {
//                if(!minusFlag)
//                {
//                    value = 5;
//                }else
//                {
//                    value = 4;
//                }
//                break;
//            }
//            case('I'):
//            {
//                value = 1;
//                break;
//            }
//        }
//        return value;
//    }
//    int romanToInt(string s) {
//        int result = 0;
//        for(int i=0;i<s.length();i++)
//        {
//            char ch = s[i];
//            int minusFlag = 0;
//            if(i<s.length()-1)
//            {
//                if(
//                (s[i]=='I' && s[i+1]=='V')||
//                (s[i]=='I' && s[i+1]=='X')||
//                (s[i]=='X' && s[i+1]=='L')||
//                (s[i]=='X' && s[i+1]=='C')||
//                (s[i]=='C' && s[i+1]=='D')||
//                (s[i]=='C' && s[i+1]=='M')
//                )
//                {
//                    ch = s[++i];
//                    minusFlag = 1;
//                }

//            }
//            cout<<ch<<endl;
//            result += getSimpleNumber(ch,minusFlag);
//        }
//        return result;
//    }
//};
