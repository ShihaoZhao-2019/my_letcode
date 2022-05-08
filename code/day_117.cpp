/*
给定一个整数数组 temperatures ，表示每天的温度，返回一个数组 answer ，其中 answer[i] 是指在第 i 天之后，才会有更高的温度。如果气温在这之后都不会升高，请在该位置用 0 来代替。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/daily-temperatures
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/


//class Solution {
//public:
//    vector<int> dailyTemperatures(vector<int>& temperatures) {
//        vector<int> ans(temperatures.size(),0);
//        vector<int> stack;
//        stack.push_back(0);
//        for(int day=1;day<temperatures.size();day++){
//            while(stack.size()>0&&temperatures[day]>temperatures[stack.back()]){
//                int preDay = stack.back();
//                ans[preDay] = day-preDay;
//                stack.pop_back();
//            }
//            stack.push_back(day);
//        }
//        return ans;
//    }
//};
