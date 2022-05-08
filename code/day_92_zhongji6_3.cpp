/*
给你一个整数数组 coins ，表示不同面额的硬币；以及一个整数 amount ，表示总金额。

计算并返回可以凑成总金额所需的 最少的硬币个数 。如果没有任何一种硬币组合能组成总金额，返回 -1 。

你可以认为每种硬币的数量是无限的。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/coin-change
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/


//class Solution {
//public:
//    void prvector(vector<int> a){for(auto b:a)cout<<b<<endl;}
//    int coinChange(vector<int>& coins, int amount) {
//        vector<int> leastAmountDp(amount+1,amount+1);
//        leastAmountDp[0] = 0;
//        for(int i=1;i<leastAmountDp.size();i++){
//            for(auto coin:coins){
//                if(i-coin>=0){
//                    leastAmountDp[i]=leastAmountDp[i]<leastAmountDp[i-coin]+1?leastAmountDp[i]:leastAmountDp[i-coin]+1;
//                }
//            }
//        }
//        return leastAmountDp[amount]>amount?-1:leastAmountDp[amount];
//    }

//};
