/*
给你一个大小为 m x n 的网格和一个球。球的起始坐标为 [startRow, startColumn] 。你可以将球移到在四个方向上相邻的单元格内（可以穿过网格边界到达网格之外）。你 最多 可以移动 maxMove 次球。

给你五个整数 m、n、maxMove、startRow 以及 startColumn ，找出并返回可以将球移出边界的路径数量。因为答案可能非常大，返回对 109 + 7 取余 后的结果。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/out-of-boundary-paths
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/






//class Solution {
//public:
//    static constexpr int MOD = 1'000'000'007;

//    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
//        vector<vector<int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
//        int outCounts = 0;
//        vector<vector<vector<int>>> dp(maxMove + 1, vector<vector<int>>(m, vector<int>(n)));
//        dp[0][startRow][startColumn] = 1;
//        for (int i = 0; i < maxMove; i++) {
//            for (int j = 0; j < m; j++) {
//                for (int k = 0; k < n; k++) {
//                    int count = dp[i][j][k];
//                    if (count > 0) {
//                        for (auto &direction : directions) {
//                            int j1 = j + direction[0], k1 = k + direction[1];
//                            if (j1 >= 0 && j1 < m && k1 >= 0 && k1 < n) {
//                                dp[i + 1][j1][k1] = (dp[i + 1][j1][k1] + count) % MOD;
//                            } else {
//                                outCounts = (outCounts + count) % MOD;
//                            }
//                        }
//                    }
//                }
//            }
//        }
//        return outCounts;
//    }
//};
