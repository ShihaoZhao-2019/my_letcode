/*
在给定的二维二进制数组 A 中，存在两座岛。（岛是由四面相连的 1 形成的一个最大组。）

现在，我们可以将 0 变为 1，以使两座岛连接起来，变成一座岛。

返回必须翻转的 0 的最小数目。（可以保证答案至少是 1 。）



来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/shortest-bridge
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

//class Solution {
//public:
//    typedef struct _POINT{
//        int x;
//        int y;
//    }POINT;
//    void showIsland(vector<POINT> island){
//        for(int i=0;i<island.size();i++){
//            cout<<island[i].x<<','<<island[i].y<<"、";
//        }
//        cout<<endl;
//    }
//    void findIsland(vector<vector<int>>& grid,POINT nowStation,vector<POINT> &result,vector<vector<int>> &visit){
//        //超过地图范围直接返回
//        // cout<<nowStation.x<<','<<nowStation.y<<endl;
//        if(nowStation.x<0||nowStation.x>=grid.size()||nowStation.y<0||nowStation.y>=grid[0].size()) return ;
//        //不是陆地直接返回
//        if(grid[nowStation.x][nowStation.y]!=1)return;
//        //访问过了直接返回
//        if(visit[nowStation.x][nowStation.y]) return ;

//        result.push_back(nowStation);
//        visit[nowStation.x][nowStation.y] = 1;
//        POINT nextStation;
//        //上下左右四个方向走找这个岛的所有点
//        nextStation = {nowStation.x+1,nowStation.y};
//        findIsland(grid,nextStation,result,visit);
//        nextStation = {nowStation.x-1,nowStation.y};
//        findIsland(grid,nextStation,result,visit);
//        nextStation = {nowStation.x,nowStation.y+1};
//        findIsland(grid,nextStation,result,visit);
//        nextStation = {nowStation.x,nowStation.y-1};
//        findIsland(grid,nextStation,result,visit);
//    }
//    void findIslands(vector<vector<POINT>> &result,vector<vector<int>>& grid){
//        vector<vector<int>> visit(grid.size(),vector<int>(grid[0].size(),0));
//        for(int i=0;i<grid.size();i++){
//            for(int j=0;j<grid[0].size();j++){
//                if(grid[i][j]&&!visit[i][j]){
//                    vector<POINT> aIsland;
//                    POINT nowStation = {i,j};
//                    findIsland(grid,nowStation,aIsland,visit);

//                    result.push_back(aIsland);
//                }
//            }
//        }
//    }
//    int buildBridge(vector<vector<POINT>> isLands){
//        // int resultMin = 0x7fffffff;
//        int resultMin = 2147483647;
//        vector<POINT> island1 = isLands[0];
//        vector<POINT> island2 = isLands[1];
//        for(auto point1:island1){
//            for(auto point2:island2){
//                int distance = abs(point1.x-point2.x) + abs(point1.y-point2.y) -1;
//                resultMin = resultMin>distance?distance:resultMin;
//            }
//        }
//        return resultMin;
//    }
//    /******************思路******************
//    1.首先深度优先搜索找到两个岛
//    2.遍历两个岛的点比对所有点之间的最小距离就是桥的长度
//    *****************************************/
//    int shortestBridge(vector<vector<int>>& grid) {
//        int result;
//        vector<vector<POINT>> isLands;
//        findIslands(isLands,grid);
//        // showIsland(isLands[0]);
//        // showIsland(isLands[1]);
//        result = buildBridge(isLands);
//        return result;
//    }
//};
