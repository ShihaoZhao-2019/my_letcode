/*
设计一个找到数据流中第 k 大元素的类（class）。注意是排序后的第 k 大元素，不是第 k 个不同的元素。

请实现 KthLargest 类：

KthLargest(int k, int[] nums) 使用整数 k 和整数流 nums 初始化对象。
int add(int val) 将 val 插入数据流 nums 后，返回当前数据流中第 k 大的元素。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/jBjn9C
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

//class KthLargest {
//private:
//    priority_queue<int, vector<int>, greater<int>> heap;
//    int size;
//public:
//    KthLargest(int k, vector<int>& nums) {
//        size = k;
//        for (auto& num : nums) {
//            add(num);
//        }
//    }

//    int add(int val) {
//        if (heap.size() < size) {
//            heap.push(val);
//        }
//        else if (val > heap.top()) {
//            heap.pop();
//            heap.push(val);
//        }
//        return heap.top();
//    }
//};
