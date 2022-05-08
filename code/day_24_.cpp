/*
以数组 intervals 表示若干个区间的集合，其中单个区间为 intervals[i] = [starti, endi] 。请你合并所有重叠的区间，并返回一个不重叠的区间数组，该数组需恰好覆盖输入中的所有区间。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/merge-intervals
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/
//class Solution {
//public:
//    void quicksort(vector<vector<int>>& intervals,int start,int end)
//    {
//        if(start>=end) return;
//        int i = start;
//        int j = end;
//        vector<int> temp = intervals[i];

//        while(i<j)
//        {
//            while(i<j&&intervals[j][0]>=temp[0])j--;
//            if(i<j)
//            {
//                intervals[i] = intervals[j];
//                i++;
//            }
//            while(i<j&&intervals[i][0]<=temp[0])i++;
//            if(i<j)
//            {
//                intervals[j] = intervals[i];
//                j--;
//            }

//        }
//        intervals[i] = temp;
//        quicksort(intervals,start,i-1);
//        quicksort(intervals,i+1,end);
//    }
//    vector<vector<int>> merge(vector<vector<int>>& intervals) {
//        quicksort(intervals,0,intervals.size()-1);
//        for(int i=0;i<intervals.size();i++)
//        {
//            cout<<intervals[i][0]<<' '<<intervals[i][1]<<endl;
//        }
//        vector<vector<int>> result;
//        for(int i=1;i<intervals.size();i++)
//        {
//            if((intervals[i][0]<=intervals[i-1][1])||(intervals[i][1]<=intervals[i-1][1]))
//            {
//                if(intervals[i][0]<=intervals[i-1][1])
//                {
//                    intervals[i][0] = intervals[i-1][0];
//                }
//                if(intervals[i][1]<=intervals[i-1][1])
//                {
//                    intervals[i][1] = intervals[i-1][1];
//                }
//                continue;
//            }

//            result.push_back(intervals[i-1]);
//        }
//        result.push_back(intervals.back());
//        return result;
//    }
//};

//#include <iostream>
//#include <vector>
//using namespace std;
//int main()
//{
////    vector<unsigned char> Vec1;
////    string Str{"123456"};

////    Vec1.assign(Str.begin(), Str.end());
////    std::cout << "String data is: " << std::endl;
////    for(auto aa : Str)
////        printf("%02x ", aa);
////    std::cout << std::endl;
////    std::cout << "Vector data is: " << std::endl;
////    for(auto aa : Vec1)
////        printf("%02x ", aa);
////    std::cout << std::endl;

//    vector<uint8_t> Vec(6, 7);
//    string Str;

//    Str.assign(Vec.begin(), Vec.end());
//    std::cout << "String data is: " << std::endl;
//    for(auto aa : Str)
//        printf("%02x ", aa);
//    std::cout << std::endl;
//    std::cout << "Vector data is: " << std::endl;
//    for(auto aa : Vec)
//        printf("%02x ", aa);
//    std::cout << std::endl;
//}
