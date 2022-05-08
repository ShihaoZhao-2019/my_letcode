/*
给你一个整数 n ，找出从 1 到 n 各个整数的 Fizz Buzz 表示，并用字符串数组 answer（下标从 1 开始）返回结果，其中：

answer[i] == "FizzBuzz" 如果 i 同时是 3 和 5 的倍数。
answer[i] == "Fizz" 如果 i 是 3 的倍数。
answer[i] == "Buzz" 如果 i 是 5 的倍数。
answer[i] == i 如果上述条件全不满足。

作者：力扣 (LeetCode)
链接：https://leetcode-cn.com/leetbook/read/top-interview-questions-easy/xngt85/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
*/


//class Solution {
//public:
//    vector<string> fizzBuzz(int n) {
//        string FB = "FizzBuzz";
//        string F = "Fizz";
//        string B = "Buzz";

//        vector<string> answer(n);
//        for(int i=0;i<n;i++)
//        {
//            if((i+1)%5==0&&(i+1)%3==0)
//            {
//                answer[i] = FB;
//            }else if((i+1)%3==0)
//            {
//                answer[i] = F;
//            }else if((i+1)%5==0)
//            {
//                answer[i] = B;
//            }else
//            {
//                string str = to_string(i+1);
//                answer[i] = str;
//            }
//        }

//        return answer;
//    }
//};
