/*
你有一个带有四个圆形拨轮的转盘锁。每个拨轮都有10个数字： '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' 。每个拨轮可以自由旋转：例如把 '9' 变为 '0'，'0' 变为 '9' 。每次旋转都只能旋转一个拨轮的一位数字。

锁的初始数字为 '0000' ，一个代表四个拨轮的数字的字符串。

列表 deadends 包含了一组死亡数字，一旦拨轮的数字和列表里的任何一个元素相同，这个锁将会被永久锁定，无法再被旋转。

字符串 target 代表可以解锁的数字，你需要给出解锁需要的最小旋转次数，如果无论如何不能解锁，返回 -1

作者：力扣 (LeetCode)
链接：https://leetcode-cn.com/leetbook/read/queue-stack/kj48j/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
*/


//class Solution {
//public:
//    typedef struct _STATUS{
//        string status;
//        int step;
//    }_STATUS;
//    //获取当前状态所能走的下一步的所有状态（包含死亡数字）
//    vector<string> getCurrAllStatus(string nowStatus){
//        vector<string> result;
//        string newStatus;
//        for(int i=0;i<4;i++){
//            newStatus = nowStatus;
//            newStatus[i] = newStatus[i]=='9'?'0':newStatus[i]+1;
//            result.push_back(newStatus);
//            newStatus = nowStatus;
//            newStatus[i] = newStatus[i]=='0'?'9':newStatus[i]-1;
//            result.push_back(newStatus);
//        }
//        return result;
//    }
//    int openLock(vector<string>& deadends, string target) {
//        unordered_set<string> seen;
//        for(string dea:deadends){
//            seen.insert(dea);
//        }
//        if(seen.count("0000")) return -1;
//        if(target == "0000")return 0;
//        seen.insert("0000");
//        queue<_STATUS> q;
//        _STATUS begin = {"0000",0};
//        q.push(begin);
//        while(!q.empty()){
//            _STATUS curr = q.front();
//            q.pop();
//            vector<string> currAllStatus = getCurrAllStatus(curr.status);
//            for(auto sta:currAllStatus){
//                if(seen.count(sta)==0){
//                    if(sta == target)return curr.step+1;
//                    _STATUS nextCurr;
//                    nextCurr.status = sta;
//                    nextCurr.step = curr.step+1;
//                    q.push(nextCurr);
//                    seen.insert(sta);
//                }
//            }
//        }
//        return -1;
//    }
//};
