/*
统计所有小于非负整数 n 的质数的数量。
*/


//class Solution {
//public:
//    int countPrimes(int n) {
//        vector<int> arr(n,1);
//        int cnt = 0;
//        for(int i = 2; i < n; i++) {
//            if(arr[i]==0) continue;
//            cnt++;
//            for(int j = i; j < n; j+=i) {
//                arr[j] = 0;
//            }
//        }
//        return cnt;

//    }
//};
