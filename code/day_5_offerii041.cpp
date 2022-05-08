/*
给定一个整数数据流和一个窗口大小，根据该滑动窗口的大小，计算滑动窗口里所有数字的平均值。

实现 MovingAverage 类：

MovingAverage(int size) 用窗口大小 size 初始化对象。
double next(int val) 成员函数 next 每次调用的时候都会往滑动窗口增加一个整数，请计算并返回数据流中最后 size 个值的移动平均值，即滑动窗口里所有数字的平均值。


来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/qIsx9U
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/
//#include<iostream>
//#include<vector>
//#include<queue>
//using namespace std;

//class MovingAverage {
//public:
//    int array[1001];
//    int rear = 0;
//    int size = 0;
//    int count = 1;
//    /** Initialize your data structure here. */
//    MovingAverage(int size) {
//        this->size = size;
//    }

//    double next(int val) {

//        double sum = 0;
//        this->rear = (this->rear + 1) %1001;
//        array[this->rear] = val;
//        if(count<size){
//            for(int i = 0;i<this->size;i++)
//            {
//                sum += array[(this->rear-i + 1001)%1001];
//            }
//            ++this->count;
//            return sum/count;
//        }

//        else{
//            for(int i = 0;i<this->count;i++)
//            {
//                sum += array[(this->rear-i + 1001)%1001];
//            }
//            return sum/this->size;
//        }

//    }
//};
////fang fa 2
//class MovingAverage2 {
//public:
//    /** Initialize your data structure here. */
//    MovingAverage2(int size) {
//        len = size;
//    }
//    double sum = 0.0;
//    int len = 0;
//    queue<int> q;
//    double next(int val) {
//        q.push(val);
//        sum += val;
//        if(q.size() > len) {
//            sum -= q.front();
//            q.pop();
//        }
//        return sum / (double)q.size();
//    }
//};

/**
 * Your MovingAverage object will be instantiated and called as such:
 * MovingAverage* obj = new MovingAverage(size);
 * double param_1 = obj->next(val);
 */
