/*
写一个 RecentCounter 类来计算特定时间范围内最近的请求。

请实现 RecentCounter 类：

RecentCounter() 初始化计数器，请求数为 0 。
int ping(int t) 在时间 t 添加一个新请求，其中 t 表示以毫秒为单位的某个时间，并返回过去 3000 毫秒内发生的所有请求数（包括新请求）。确切地说，返回在 [t-3000, t] 内发生的请求数。
保证 每次对 ping 的调用都使用比之前更大的 t 值。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/H8086Q
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/
//class RecentCounter {
//public:
//    RecentCounter() {
//    }
//    int rear = -1;
//    int front = 0;
//    int que[10000];
//    int ping(int t) {

//        rear = (rear + 1);
//        que[rear] = t;

//        // cout<<t<<endl;
//        while(que[rear] - que[front] >3000)front++;

//        int result = rear-front+1;
//        return result;



//    }
//};

///**
// * Your RecentCounter object will be instantiated and called as such:
// * RecentCounter* obj = new RecentCounter();
// * int param_1 = obj->ping(t);
// */
