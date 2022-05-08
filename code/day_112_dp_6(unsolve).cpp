/*
给你一个 互不相同 的整数数组，其中 locations[i] 表示第 i 个城市的位置。同时给你 start，finish 和 fuel 分别表示出发城市、目的地城市和你初始拥有的汽油总量

每一步中，如果你在城市 i ，你可以选择任意一个城市 j ，满足  j != i 且 0 <= j < locations.length ，并移动到城市 j 。从城市 i 移动到 j 消耗的汽油量为 |locations[i] - locations[j]|，|x| 表示 x 的绝对值。

请注意， fuel 任何时刻都 不能 为负，且你 可以 经过任意城市超过一次（包括 start 和 finish ）。

请你返回从 start 到 finish 所有可能路径的数目。

由于答案可能很大， 请将它对 10^9 + 7 取余后返回。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/count-all-possible-routes
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/


//class Solution {
//public:
//    int countRoutes(vector<int>& locations, int start, int finish, int fuel) {
//        int mod = 1e9 + 7;
//        int n = locations.size();
//        vector<vector<int>> dp(fuel + 1, vector<int>(n, 0));
//        dp[0][start] = 1;
//        for(int f = 1;f<=fuel;++f){
//            for(int begin = 0;begin<n;++begin){
//                for(int end = 0;end<n;++end){
//                    if(begin==end)continue;
//                    int dis = abs(locations[begin] - locations[end]);
//                    if(f>=dis){
//                        dp[f][begin] += dp[f-dis][end];
//                        dp[f][begin] %=mod;
//                    }
//                }
//            }
//        }
//        int ans = 0;
//        for (int f = 0; f <= fuel; ++f) {
//            ans += dp[f][finish];
//            ans %= mod;
//        }
//        return ans;
//    }
//};
