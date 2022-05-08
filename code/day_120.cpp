/*
请你仅使用两个栈实现先入先出队列。队列应当支持一般队列支持的所有操作（push、pop、peek、empty）：

实现 MyQueue 类：

void push(int x) 将元素 x 推到队列的末尾
int pop() 从队列的开头移除并返回元素
int peek() 返回队列开头的元素
boolean empty() 如果队列为空，返回 true ；否则，返回 false
说明：

你 只能 使用标准的栈操作 —— 也就是只有 push to top, peek/pop from top, size, 和 is empty 操作是合法的。
你所使用的语言也许不支持栈。你可以使用 list 或者 deque（双端队列）来模拟一个栈，只要是标准的栈操作即可。

作者：力扣 (LeetCode)
链接：https://leetcode-cn.com/leetbook/read/queue-stack/gvtxe/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
*/


//class MyQueue {
//public:
//    vector<int> inQueueStack;
//    vector<int> outQueueStack;
//    MyQueue() {

//    }

//    void push(int x) {
//        inQueueStack.push_back(x);
//    }

//    int pop() {
//        if(empty()) return -1;
//        if(outQueueStack.size()==0){
//            while(inQueueStack.size()>0){
//                outQueueStack.push_back(inQueueStack.back());
//                inQueueStack.pop_back();
//            }
//        }
//        int vaule = outQueueStack.back();
//        outQueueStack.pop_back();
//        return vaule;
//    }

//    int peek() {
//        if(empty()) return -1;
//        if(outQueueStack.size()==0){
//            while(inQueueStack.size()>0){
//                outQueueStack.push_back(inQueueStack.back());
//                inQueueStack.pop_back();
//            }
//        }
//        return outQueueStack.back();
//    }

//    bool empty() {
//        if(inQueueStack.size()==0&&outQueueStack.size()==0)return 1;
//        else return 0;
//    }
//};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
