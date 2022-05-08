/*
给定一个 m x n 二维字符网格 board 和一个字符串单词 word 。如果 word 存在于网格中，返回 true ；否则，返回 false 。

单词必须按照字母顺序，通过相邻的单元格内的字母构成，其中“相邻”单元格是那些水平相邻或垂直相邻的单元格。同一个单元格内的字母不允许被重复使用。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/word-search
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

//class Solution {
//public:
//    void myDfs(vector<vector<char>>& board,int i,int j,vector<vector<bool>>& visit,string word,int layer,int n,int &result){
//        //减掉枝子
//        //搜索成功了而直接返回、超尺寸了直接返回，当这一层吗，满足搜索条件，继续进行下一层的搜索。
//        if(layer==n)result = 1;
//        if(result == 1)return;
//        if(i<0||i>=board.size()||j<0||j>=board[0].size())return;

//        if(visit[i][j]==1) return ;
//        if(board[i][j]!=word[layer])return ;

//        visit[i][j] = 1;

//        myDfs(board,i-1,j,visit,word,layer+1,n,result);//up
//        myDfs(board,i+1,j,visit,word,layer+1,n,result);//down
//        myDfs(board,i,j-1,visit,word,layer+1,n,result);//left
//        myDfs(board,i,j+1,visit,word,layer+1,n,result);//right

//        visit[i][j] = 0;

//    }
//    bool exist(vector<vector<char>>& board, string word) {
//        int result = 0;
//        int m = board.size();
//        if(m==0)return 0;
//        int n = board[0].size();
//        vector<vector<bool>> visit(m,vector<bool>(n,0));
//        for(int i=0;i<m;i++)
//        for(int j=0;j<n;j++)
//        {
//            myDfs(board,i,j,visit,word,0,word.length(),result);
//            if(result == 1){
//                return 1;
//            }
//        }
//        return 0;
//    }

//};
