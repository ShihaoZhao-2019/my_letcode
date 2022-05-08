/*
有一幅以 m x n 的二维整数数组表示的图画 image ，其中 image[i][j] 表示该图画的像素值大小。

你也被给予三个整数 sr ,  sc 和 newColor 。你应该从像素 image[sr][sc] 开始对图像进行 上色填充 。

为了完成 上色工作 ，从初始像素开始，记录初始坐标的 上下左右四个方向上 像素值与初始坐标相同的相连像素点，接着再记录这四个方向上符合条件的像素点与他们对应 四个方向上 像素值与初始坐标相同的相连像素点，……，重复该过程。将所有有记录的像素点的颜色值改为 newColor 。

最后返回 经过上色渲染后的图像 。

*/

//class Solution {
//public:
//    void dfs(vector<vector<int>>& image, int sr, int sc, int newColor,vector<vector<int>> &visit,int oldColor){
//        if(sr>=image.size()||sr<0||sc>= image[0].size()||sc<0||visit[sr][sc]==1||image[sr][sc]!=oldColor) return ;
//        image[sr][sc] = newColor;
//        visit[sr][sc] = 1;
//        dfs(image,sr+1,sc,newColor,visit,oldColor);
//        dfs(image,sr-1,sc,newColor,visit,oldColor);
//        dfs(image,sr,sc+1,newColor,visit,oldColor);
//        dfs(image,sr,sc-1,newColor,visit,oldColor);
//    }
//    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
//        vector<vector<int>> visit(image.size(),vector<int>(image[0].size(),0));
//        dfs(image,sr,sc,newColor,visit,image[sr][sc]);
//        return image;
//    }
//};
