/*
设计一个类似堆栈的数据结构，将元素推入堆栈，并从堆栈中弹出出现频率最高的元素。

实现 FreqStack 类:

FreqStack() 构造一个空的堆栈。
void push(int val) 将一个整数 val 压入栈顶。
int pop() 删除并返回堆栈中出现频率最高的元素。
如果出现频率最高的元素不只一个，则移除并返回最接近栈顶的元素。

来源：力扣（LeetCode）
链接：https://leetcode.cn/problems/maximum-frequency-stack
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

class FreqStack {
public:
    FreqStack() {
        max_freq = 0;
    }
    
    void push(int val) {
        if(freq.count(val) == 0)
        {
            freq.emplace(val,0);
        }
        freq[val]++;

        if(all_stack.count(freq[val]) == 0)
        {
            all_stack.emplace(freq[val],stack<int>());
        }
        all_stack[freq[val]].push(val);
        max_freq = max(freq[val],max_freq);
    }
    
    int pop() {
        int result = all_stack[max_freq].top();
        freq[result]--;
        all_stack[max_freq].pop();
        if(all_stack[max_freq].empty())
        {
            max_freq--;
        }
        return result;
    }

private:
    unordered_map<int,int> freq;
    unordered_map<int,stack<int>> all_stack;
    int max_freq;
};
