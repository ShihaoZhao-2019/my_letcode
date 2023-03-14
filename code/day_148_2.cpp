/**
 * 两个栈实现一个队列
*/


#include<iostream>
#include<stack>
class CQueue {
public:
    CQueue() {

    }
    
    void appendTail(int value) {
        stack_left.push(value);
    }
    
    int deleteHead() {
        if(stack_right.size()==0&&stack_left.size()==0)return -1;
        else if(stack_right.size()==0)
        {
            empty_left();
            auto result = stack_right.top();
            stack_right.pop();
            return result;
        }else{
            auto result = stack_right.top();
            stack_right.pop();
            return result;
        }
    }

private:
    void empty_left()
    {
        while(stack_left.size()>0)
        {
            stack_right.push(stack_left.top());
            stack_left.pop();
        }
    }
    std::stack<int> stack_left;
    std::stack<int> stack_right;
};

int main()
{
    return 0;
}