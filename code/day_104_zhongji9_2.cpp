/*
有效的算符包括 +、-、*、/ 。每个运算对象可以是整数，也可以是另一个逆波兰表达式。

注意 两个整数之间的除法只保留整数部分。

可以保证给定的逆波兰表达式总是有效的。换句话说，表达式总会得出有效数值且不存在除数为 0 的情况。

作者：力扣 (LeetCode)
链接：https://leetcode-cn.com/leetbook/read/top-interview-questions-medium/xw20mv/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
*/
//class Solution {
//public:
//    int evalRPN(vector<string>& tokens) {
//        vector<int> stack(tokens.size());
//        int top = -1;
//        for(auto str:tokens){
//            char ch = str[0];
//            if(str.length()==1&&(ch=='+'||ch=='-'||ch=='*'||ch=='/')){
//                if(ch=='+'){
//                    int tmep = stack[top] +  stack[top-1];
//                    stack[top-1] = tmep;
//                    stack[top] = 0;
//                    top--;
//                }else if(ch=='-'){
//                    int tmep = stack[top-1] -  stack[top];
//                    stack[top-1] = tmep;
//                    stack[top] = 0;
//                    top--;
//                }else if(ch=='*'){
//                    int tmep = stack[top] *  stack[top-1];
//                    stack[top-1] = tmep;
//                    stack[top] = 0;
//                    top--;
//                }else if(ch=='/'){
//                    int tmep = stack[top-1] /  stack[top];
//                    stack[top-1] = tmep;
//                    stack[top] = 0;
//                    top--;
//                }
//            }else{
//                int number = atoi((char *)str.c_str());
//                stack[++top] = number;
//            }
//        }
//        return stack[0];
//    }
//};
