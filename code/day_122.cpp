/*
给定一个经过编码的字符串，返回它解码后的字符串。

编码规则为: k[encoded_string]，表示其中方括号内部的 encoded_string 正好重复 k 次。注意 k 保证为正整数。

你可以认为输入字符串总是有效的；输入字符串中没有额外的空格，且输入的方括号总是符合格式要求的。

此外，你可以认为原始数据不包含数字，所有的数字只表示重复的次数 k ，例如不会出现像 3a 或 2[4] 的输入。

*/


//class Solution {
//public:
//string repeat(string str,int n) {
//    string result;
//    for(int i = 0; i < n; i++)
//        result += str;
//    return result;
//}
//    string decodeString(string s) {

//        string result;
//        vector<char> stack;
//        //先把纯字符输出
//        string::iterator ch = s.begin();
//        while(ch!=s.end()){
//            cout<<endl;
//            int flag = 0;
//            for(;ch!=s.end()&&((*ch>='a'&&*ch<='z')||(*ch>='A'&&*ch<='Z'));++ch){
//                result += string(1,*ch);
//            }
//            //获得重复次数
//            int k = 0;
//            for(;ch!=s.end()&&((*ch)>='0'&&(*ch)<='9');++ch){
//                k = k*10 + *ch-'0';
//            }
//            cout<<k<<endl;
//            for(;ch!=s.end();++ch){
//                if(*ch=='['){
//                    stack.push_back(*ch);
//                    flag++;
//                }else if(*ch==']'){
//                     flag--;
//                     if(flag==0){
//                        string temString;
//                        temString.assign(stack.begin()+1,stack.end());
//                        result += repeat(decodeString(temString),k);
//                        stack.clear();
//                        ch++;
//                        break;
//                     }else{
//                        stack.push_back(*ch);
//                     }
//                }else{
//                    stack.push_back(*ch);
//                }
//            }
//        }
//        return result;
//    }
//};
