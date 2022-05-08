/*
给你一个由 '1'（陆地）和 '0'（水）组成的的二维网格，请你计算网格中岛屿的数量。

岛屿总是被水包围，并且每座岛屿只能由水平方向和/或竖直方向上相邻的陆地连接形成。

此外，你可以假设该网格的四条边均被水包围。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/number-of-islands
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/


//class Solution {
//public:
//    //类似于深度优先搜索的想法，设置visit数组来记录被访问过的结点，然后对于被一个结点递归的处理，每一个陆地结点判断上下左右是否是陆地
//    int numIslands(vector<vector<char>>& grid) {
//        if(grid.size()==0) return 0;
//        int result = 0;
//        int m = grid.size();
//        int n = grid[0].size();
//        vector<vector<char>> visit(m,vector<char>(n,0));
//        for(int i=0;i<m;i++)
//        for(int j=0;j<n;j++)
//        if(!visit[i][j]&&grid[i][j]=='1'){
//            myDfs(grid,visit,m,n,i,j);
//            result++;
//        }
//        return result;
//    }
//    void myDfs(vector<vector<char>>& grid,vector<vector<char>> &visit,int m,int n,int i,int j){
//        //首先判断有没有指针越界，然后这个地方是陆地并且没有被访问过才继续做后续的处理
//        bool flag = i>=0 && j>=0 && i<m && j<n && grid[i][j]=='1' && !visit[i][j];
//        if(flag){
//            visit[i][j] = 1;
//            //向上下左右各走一步
//            myDfs(grid,visit,m,n,i+1,j);
//            myDfs(grid,visit,m,n,i,j+1);
//            myDfs(grid,visit,m,n,i-1,j);
//            myDfs(grid,visit,m,n,i,j-1);
//        }

//    }
//};
