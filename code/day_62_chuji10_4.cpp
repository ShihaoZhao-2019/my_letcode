/*
给定一个非负整数 numRows，生成「杨辉三角」的前 numRows 行。

在「杨辉三角」中，每个数是它左上方和右上方的数的和。
*/


//class Solution {
//public:
//    vector<vector<int>> generate(int numRows) {
//        vector<vector<int>> result;
//        //首先排除两种特殊情况
//        result = vector(1, vector<int>(1, 1));
//        if(numRows == 1) return result;

//        vector<int> currentLayer(2,1);
//        result.push_back(currentLayer);
//        if(numRows == 2) return result;

//        //开始生成剩下层
//        for(int i=3;i<=numRows;i++)
//        {
//            vector<int> lastLayer = result[i-2];
//            int lastLayerNumber = lastLayer.size();
//            int currentLayerNumber = lastLayerNumber+1;

//            vector<int> currentLayer(currentLayerNumber);
//            currentLayer[0] = 1;
//            currentLayer[currentLayerNumber-1]  = 1;
//            for(int j=1;j<currentLayerNumber-1;j++)
//            {
//                currentLayer[j] = lastLayer[j-1] + lastLayer[j];
//            }
//            result.push_back(currentLayer);


//        }
//        return result;
//    }
//};
