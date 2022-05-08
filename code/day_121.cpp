/*
用队列实现栈
请你仅使用两个队列实现一个后入先出（LIFO）的栈，并支持普通栈的全部四种操作（push、top、pop 和 empty）。

实现 MyStack 类：

void push(int x) 将元素 x 压入栈顶。
int pop() 移除并返回栈顶元素。
int top() 返回栈顶元素。
boolean empty() 如果栈是空的，返回 true ；否则，返回 false 。


注意：

你只能使用队列的基本操作 —— 也就是 push to back、peek/pop from front、size 和 is empty 这些操作。
你所使用的语言也许不支持队列。 你可以使用 list （列表）或者 deque（双端队列）来模拟一个队列 , 只要是标准的队列操作即可。

作者：力扣 (LeetCode)
链接：https://leetcode-cn.com/leetbook/read/queue-stack/gw7fg/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
*/


//class MyStack {
//public:
//    queue<int> q1;
//    queue<int> q2;
//    int qFlag;
//    MyStack() {
//        qFlag = 1;
//    }

//    void push(int x) {
//        if(qFlag==1){
//            q1.push(x);
//        }else if(qFlag==2){
//            q2.push(x);
//        }
//    }

//    int pop() {
//        if(qFlag==1){
//            while(q1.size()-1>0){
//                q2.push(q1.front());
//                q1.pop();
//            }
//            int vaule = q1.front();
//            q1.pop();
//            qFlag=2;
//            return vaule;
//        }else if(qFlag==2){
//            while(q2.size()-1>0){
//                q1.push(q2.front());
//                q2.pop();
//            }
//            int vaule = q2.front();
//            q2.pop();
//            qFlag=1;
//            return vaule;
//        }
//        return 0;
//    }

//    int top() {
//        if(qFlag==1){
//            while(q1.size()-1>0){
//                q2.push(q1.front());
//                q1.pop();
//            }
//            int vaule = q1.front();
//            q2.push(vaule);
//            q1.pop();
//            qFlag=2;
//            return vaule;
//        }else if(qFlag==2){
//            while(q2.size()-1>0){
//                q1.push(q2.front());
//                q2.pop();
//            }
//            int vaule = q2.front();
//            q1.push(vaule);
//            q2.pop();
//            qFlag=1;
//            return vaule;
//        }
//        return 0;
//    }

//    bool empty() {
//        if(q1.size()==0&&q2.size()==0)return 1;
//        return 0;
//    }
//};

