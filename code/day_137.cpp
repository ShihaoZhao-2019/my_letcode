/*
给定一个由 0 和 1 组成的矩阵 mat ，请输出一个大小相同的矩阵，其中每一个格子是 mat 中对应位置元素到最近的 0 的距离。

两个相邻元素间的距离为 1 。

来源：力扣（LeetCode）
链接：https://leetcode.cn/problems/01-matrix
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/
class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector<vector<int>> dp(m,vector(n,INT_MAX-1));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(mat[i][j] == 0)dp[i][j] = 0;
                else{
                    if(i>0){
                        dp[i][j] = min(dp[i][j],dp[i-1][j] + 1);
                    }
                    if(j>0)
                    {
                        dp[i][j] = min(dp[i][j],dp[i][j-1] + 1);
                    }
                }
            }
        }
        for(int i=m-1;i>=0;i--)
        {
            for(int j=n-1;j>=0;j--)
            {
                if(i<m-1){
                    dp[i][j] = min(dp[i][j],dp[i+1][j] + 1);
                }
                if(j<n-1)
                {
                    dp[i][j] = min(dp[i][j],dp[i][j+1] + 1);
                }
            }
        }
        return dp;
    }
};
