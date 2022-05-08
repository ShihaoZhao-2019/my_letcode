/*
一个机器人位于一个 m x n 网格的左上角 （起始点在下图中标记为 “Start” ）。

机器人每次只能向下或者向右移动一步。机器人试图达到网格的右下角（在下图中标记为 “Finish”）。

现在考虑网格中有障碍物。那么从左上角到右下角将会有多少条不同的路径？

网格中的障碍物和空位置分别用 1 和 0 来表示。

作者：宫水三叶
链接：https://leetcode-cn.com/leetbook/read/path-problems-in-dynamic-programming/rt1hg6/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
*/


//class Solution {
//public:
//    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
//        int m = obstacleGrid.size();
//        int n = obstacleGrid[0].size();
//        if(obstacleGrid[m-1][n-1]==1||obstacleGrid[0][0]==1){
//            return 0;
//        }
//        vector<vector<unsigned int>> pathNumber(m,vector<unsigned int>(n,1));
//        for(int i=m-1;i>=0;i--){
//            for(int j=n-1;j>=0;j--){
//                if(obstacleGrid[i][j]==1){
//                    pathNumber[i][j] = 0;
//                }else{
//                    if(i+1<m&&j+1<n){
//                        pathNumber[i][j] = pathNumber[i+1][j] + pathNumber[i][j+1];
//                    }else if(i+1<m){
//                        pathNumber[i][j] = pathNumber[i+1][j];
//                    }else if(j+1<n){
//                        pathNumber[i][j] = pathNumber[i][j+1];
//                    }else{
//                        pathNumber[i][j] = 1;
//                    }

//                }
//            }
//        }
//        return pathNumber[0][0];
//    }
//};

