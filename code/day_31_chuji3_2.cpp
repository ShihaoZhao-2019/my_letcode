/*
给定一个字符串，找到它的第一个不重复的字符，并返回它的索引。如果不存在，则返回 -1。

示例：

s = "leetcode"
返回 0

s = "loveleetcode"
返回 2


提示：你可以假定该字符串只包含小写字母

作者：力扣 (LeetCode)
链接：https://leetcode-cn.com/leetbook/read/top-interview-questions-easy/xn5z8r/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
*/


//#include <ext/hash_map>
//#include <string>
//using namespace __gnu_cxx;
//class Solution {
//public:
//    int firstUniqChar(string s) {
//        hash_map<char,int> my_map;
//        for(int i=0;i<s.length();i++)
//        {
//            if(my_map.find(s[i]) == my_map.end()){
//                my_map[s[i]] = 1;
//            }else{
//                my_map[s[i]] += 1;
//            }
//        }
//        int i;
//        for(i=0;i<s.length();i++)
//        {
//            if(my_map[s[i]] == 1)
//                break;
//        }
//        if(i>=s.length()) return -1;
//        return i;

//    }
//};


//class Solution {
//public:
//    int firstUniqChar(string s) {
//        vector<unsigned char> my_map(26,0);
//        for(int i=0;i<s.length();i++)
//        {
//            if(my_map[s[i] - 'a'] >2) continue;
//            my_map[s[i] - 'a']++;
//        }
//        int i;
//        for(i=0;i<s.length();i++)
//        {
//            if(my_map[s[i] - 'a'] == 1)
//                break;
//        }
//        if(i>=s.length()) return -1;
//        return i;

//    }
//};
