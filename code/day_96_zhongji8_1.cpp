/*
编写一个算法来判断一个数 n 是不是快乐数。

「快乐数」 定义为：

对于一个正整数，每一次将该数替换为它每个位置上的数字的平方和。
然后重复这个过程直到这个数变为 1，也可能是 无限循环 但始终变不到 1。
如果这个过程 结果为 1，那么这个数就是快乐数。
如果 n 是 快乐数 就返回 true ；不是，则返回 false 。

作者：力扣 (LeetCode)
链接：https://leetcode-cn.com/leetbook/read/top-interview-questions-medium/xw99u7/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
*/


//#include <ext/hash_map>
//using namespace __gnu_cxx;
//class Solution {
//public:
//    hash_map<int,bool> unHappyMap;
//    Solution(){
//        unHappyMap[4] = 1;
//        unHappyMap[16] = 1;
//        unHappyMap[37] = 1;
//        unHappyMap[58] = 1;
//        unHappyMap[89] = 1;
//        unHappyMap[145] = 1;
//        unHappyMap[42] = 1;
//        unHappyMap[20] = 1;
//        unHappyMap[4] = 1;
//    }
//    bool isHappy(int n) {
//        while(n!=1){
//            vector<int> nArray;
//            while(n!=0){
//                nArray.push_back(n%10);
//                n/=10;
//            }
//            // for(auto i:nArray)cout<<i<<endl;
//            n=0;
//            for(int i=nArray.size()-1;i>=0;i--)n += nArray[i] * nArray[i];
//            cout<<n<<endl;
//            if(unHappyMap.find(n)!=unHappyMap.end()) return 0;
//        }
//        return 1;
//    }
//};
