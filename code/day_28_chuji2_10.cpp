/*
请你判断一个 9x9 的数独是否有效。只需要 根据以下规则 ，验证已经填入的数字是否有效即可。

数字 1-9 在每一行只能出现一次。
数字 1-9 在每一列只能出现一次。
数字 1-9 在每一个以粗实线分隔的 3x3 宫内只能出现一次。（请参考示例图）
数独部分空格内已填入了数字，空白格用 '.' 表示。

注意：

一个有效的数独（部分已被填充）不一定是可解的。
只需要根据以上规则，验证已经填入的数字是否有效即可。

作者：力扣 (LeetCode)
链接：https://leetcode-cn.com/leetbook/read/top-interview-questions-easy/x2f9gg/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
*/


//#include <ext/hash_map>
//using namespace __gnu_cxx;
//typedef struct Point2D
//{
//    int x;
//    int y;
//}Point2D;

//class Solution {
//public:
//    //判断这个点出现的位置是否符合数独的规则
//    bool judgePoint(vector<Point2D> &pointList)
//    {
//        vector<vector<int>> hanglie(3,vector<int>(9,0));
//        int result = 1;
//        int x;
//        int y;
//        //判断行列
//        for(int i=0;i<pointList.size();i++)
//        {
//            x = pointList[i].x;
//            y = pointList[i].y;
//            if(hanglie[0][x]==0)
//            {
//                hanglie[0][x] = 1;
//            }else
//            {
//                result = 0;
//                break;
//            }
//            if(hanglie[1][y]==0)
//            {
//                hanglie[1][y] = 1;
//            }else
//            {
//                result = 0;
//                break;
//            }
//            //判断九宫格
//            //判断属于哪一个格子
//            int geziNumber = (x/3)*3 + y/3 ;
//            if(hanglie[2][geziNumber]==0)
//            {
//                hanglie[2][geziNumber] = 1;
//            }else
//            {
//                result = 0;
//                break;
//            }

//        }

//        return result;

//    }
//    bool isValidSudoku(vector<vector<char>>& board) {
//       hash_map<char,vector<Point2D>> myMap;
//       for(int i=0;i<board.size();++i)
//           for(int j=0;j<board.size();++j)
//           {
//               Point2D point;
//               point.x = i;
//               point.y = j;
//               if(board[i][j]!='.')
//               {
//                    if(myMap.find(board[i][j])==myMap.end())
//                    {
//                        vector<Point2D> pointList;
//                        myMap[board[i][j]] = pointList;
//                    }
//                    myMap[board[i][j]].push_back(point);
//               }
//           }
//        int result = 1;
//        for(int i=1;i<=9;i++)
//        {
//            if(myMap.find(i+'0')!=myMap.end())
//            {
//                vector<Point2D> pointList = myMap[i+'0'];
//                if(judgePoint(pointList) == 0)
//                {
//                    result = 0;
//                    break;
//                }
//            }
//        }
//        return result;
//    }
//};
