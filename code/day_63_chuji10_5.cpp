/*
给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串 s ，判断字符串是否有效。

有效字符串需满足：

左括号必须用相同类型的右括号闭合。
左括号必须以正确的顺序闭合。

作者：力扣 (LeetCode)
链接：https://leetcode-cn.com/leetbook/read/top-interview-questions-easy/xnbcaj/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
*/

//class Solution {
//public:
//    bool isValid(string s) {
//        vector<char> stack;
//        int result = 1;
//        for(auto &ch : s)
//        {
//            if(stack.size()==0&&(ch == ')' || ch == '}' || ch == ']'))
//            {
//                result = 0;
//                break;
//            }
//            if(ch == '(' || ch == '{' || ch == '[')stack.push_back(ch);
//            else if(ch == ')' || ch == '}' || ch == ']')
//            {
//                char temp = stack.back();
//                if(temp=='('&&ch==')'||temp=='['&&ch==']'||temp=='{'&&ch=='}') stack.pop_back();
//                else
//                {
//                    result = 0;
//                    break;
//                }
//            }
//        }
//        if(stack.size()!=0)result = 0;
//        return result;
//    }
//};
