/*
有 n 个房间，房间按从 0 到 n - 1 编号。最初，除 0 号房间外的其余所有房间都被锁住。你的目标是进入所有的房间。然而，你不能在没有获得钥匙的时候进入锁住的房间。

当你进入一个房间，你可能会在里面找到一套不同的钥匙，每把钥匙上都有对应的房间号，即表示钥匙可以打开的房间。你可以拿上所有钥匙去解锁其他房间。

给你一个数组 rooms 其中 rooms[i] 是你进入 i 号房间可以获得的钥匙集合。如果能进入 所有 房间返回 true，否则返回 false。

作者：力扣 (LeetCode)
链接：https://leetcode.cn/leetbook/read/queue-stack/gle1r/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
*/

class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        // std::cout<<'hello world'<<endl;
        auto n = rooms.size();
        vector<int> seen(n,0);
        queue<int> keys;
        keys.push(0);
        
        while(keys.empty() == false)
        {
            int key_now = keys.front();
            keys.pop();
            if(seen[key_now] == 0)
            {
                seen[key_now] = 1;
                for(auto key:rooms[key_now])keys.push(key);
            }
        }
        
        for(auto open:seen)if(!open)return false;
        return true;
    }
};
