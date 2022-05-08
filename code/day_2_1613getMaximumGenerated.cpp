/*题目描述
有 n 个城市通过一些航班连接。给你一个数组 flights ，其中 flights[i] = [fromi, toi, pricei] ，表示该航班都从城市 fromi 开始，以价格 toi 抵达 pricei。

现在给定所有的城市和航班，以及出发城市 src 和目的地 dst，你的任务是找到出一条最多经过 k 站中转的路线，使得从 src 到 dst 的 价格最便宜 ，并返回该价格。 如果不存在这样的路线，则输出 -1。



来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/cheapest-flights-within-k-stops
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

//#include<iostream>
//#include<vector>
//using namespace std;

//class Solution {
//public:
//    typedef struct _price{
//        int prices;
//        int path;
//    }_price;
//    int MAX = 10001;
//    int **array;
//    _price **prices;
//    void Flyorid(int n,vector<vector<int>>& flights,int **array,_price **prices){
//        //创建邻接矩阵和代价数组
//        array = (int**) malloc(sizeof(int)*n);
//        prices = (int**) malloc(sizeof(int)*n);
//        for(int i=0;i<n;i++){
//          array[i] = (int*)malloc(sizeof(int)*n);
//          prices[i] = (int*)malloc(sizeof(int)*n);
//        }
//        for(int i=0;i<n;i++){
//            for(int j=0;j<n;j++){
//                prices[i][j]->prices = MAX;
//                prices[i][j]->path = -1;
//                array[i][j] = MAX;
//            }
//        }
//        for(int i=0;i<flights.size();++i)array[flights[0]][flights[1]] = flights[2];
//        for(int i=0;i<n;i++){
//            for(int j=0;j<n;j++){
//                prices[i][j]->prices = array[i][j];
//                if(prices[i][j]->prices<MAX)prices[i][j]->path = i;
//                for (k = 0; k < n;k++)
//                for (i = 0; i < n;i++)
//                for (j = 0; j < n; j++){
//                    if (D[i][j]>D[i][k] + D[k][j])
//                    {
//                        prices[i][j]->prices = prices[i][k]->prices + prices[k][j]->prices;
//                        prices[i][j].path = prices[k][j].path;
//                    }
//                }
//                }
//            }
//        }




//    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
//        build_matrix(n,flights,array,prices);

//    }
//};


