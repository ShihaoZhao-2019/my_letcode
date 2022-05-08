/*
给定一个数组 prices ，其中 prices[i] 是一支给定股票第 i 天的价格。

设计一个算法来计算你所能获取的最大利润。你可以尽可能地完成更多的交易（多次买卖一支股票）。

注意：你不能同时参与多笔交易（你必须在再次购买前出售掉之前的股票）。

作者：力扣 (LeetCode)
链接：https://leetcode-cn.com/leetbook/read/top-interview-questions-easy/x2zsx1/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
*/

//class Solution {
//public:
//    int maxProfit(vector<int>& prices) {
//        int i = 0;
//        while((i<prices.size()-1) && prices[i]>=prices[i+1]) i++;
//        if(i>=prices.size()-1) return 0;

//        int j = i+1;
//        int sum = 0;
//        while(j<prices.size())
//        {
//            sum -= prices[i];
//            while(j<prices.size()&&prices[j]>=prices[i]){++j;++i;}
//            sum += prices[i];
//            ++i;
//            ++j;

//        }
//        return sum;
//    }
//};
