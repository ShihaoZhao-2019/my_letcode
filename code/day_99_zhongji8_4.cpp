/*
实现 pow(x, n) ，即计算 x 的 n 次幂函数（即，xn ）。
*/
//class Solution {
//public:
//    double quickPow(double x,long long n){
//        double ans = 1.00000;
//        double tribution = x;
//        while(n>0){
//            if(n%2==1){
//                ans *= tribution;
//            };
//            tribution *=tribution;
//            n/=2;
//        }
//        return ans;
//    }
//    double myPow2(double x, int n) {
//        long long N = n;
//        if(N>0)return quickPow(x,N);
//        else return 1.0/quickPow(x,-N);
//    }
//    double myPow(double x, int n) {
//        long long N = n;
//        return N >= 0 ? quickPow(x, N) : 1.0 / quickPow(x, -N);
//    }
//};
