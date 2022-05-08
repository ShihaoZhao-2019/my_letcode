/*
实现RandomizedSet 类：

RandomizedSet() 初始化 RandomizedSet 对象
bool insert(int val) 当元素 val 不存在时，向集合中插入该项，并返回 true ；否则，返回 false 。
bool remove(int val) 当元素 val 存在时，从集合中移除该项，并返回 true ；否则，返回 false 。
int getRandom() 随机返回现有集合中的一项（测试用例保证调用此方法时集合中至少存在一个元素）。每个元素应该有 相同的概率 被返回。
你必须实现类的所有函数，并满足每个函数的 平均 时间复杂度为 O(1) 。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/insert-delete-getrandom-o1
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/


//#include <ext/hash_map>
//using namespace __gnu_cxx;
//class RandomizedSet {
//public:
//    hash_map<int,int> myMap;
//    vector<int> myList;

//    RandomizedSet() {

//    }

//    bool insert(int val) {
//        if(myMap.find(val)!=myMap.end()) return 0;
//        myList.push_back(val);
//        myMap[val] = myList.size()-1;
//        return 1;
//    }

//    bool remove(int val) {
//        if(myMap.find(val)==myMap.end()) return 0;
//        int index = myMap[val];
//        swap(myList[index],myList[myList.size()-1]);
//        myMap[myList[index]] = index;
//        myList.pop_back();
//        myMap.erase(val);
//        return 1;
//    }

//    int getRandom() {
//        int randNumber = rand()%myList.size();
//        return myList[randNumber];
//    }
//};

///**
// * Your RandomizedSet object will be instantiated and called as such:
// * RandomizedSet* obj = new RandomizedSet();
// * bool param_1 = obj->insert(val);
// * bool param_2 = obj->remove(val);
// * int param_3 = obj->getRandom();
// */
