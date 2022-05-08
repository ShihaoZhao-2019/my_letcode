/*
设计一个支持 push ，pop ，top 操作，并能在常数时间内检索到最小元素的栈。

push(x) —— 将元素 x 推入栈中。
pop() —— 删除栈顶的元素。
top() —— 获取栈顶元素。
getMin() —— 检索栈中的最小元素。

作者：力扣 (LeetCode)
链接：https://leetcode-cn.com/leetbook/read/top-interview-questions-easy/xnkq37/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
*/

//class MinStack {
//public:
//    int min ;
//    vector<int> myStack;
//    vector<int> minStack;

//    int topIndex;
//    MinStack() {
//        min = 2147483647;
//    }

//    void push(int val) {
//        myStack.push_back(val);
//        if(val<=min)
//        {
//            min = val;
//            minStack.push_back(min);
//        }
//    }

//    void pop() {
//        int val =myStack.back();
//        myStack.pop_back();
//        if(val==min)
//        {
//            minStack.pop_back();
//            if(minStack.size()>0)
//            {
//                min = minStack.back();
//            }
//            else
//            {
//                min = 2147483647;
//            }

//        }

//    }

//    int top() {
//        return myStack.back();
//    }

//    int getMin() {
//        return minStack.back();
//    }
//};
