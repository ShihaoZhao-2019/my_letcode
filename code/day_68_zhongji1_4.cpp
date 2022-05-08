/*
给定一个字符串 s ，请你找出其中不含有重复字符的 最长子串 的长度。
*/

//class Solution {
//public:
////原理就是用哈希表记录每个元素的索引，遇到重复元素就从重复元素的后一个元素开始找（双指针实现），确保ij之间没有重复元素。
//    int lengthOfLongestSubstring(string s) {
//        if(s.length()==0)return 0;
//        map<char,int> my_map;
//        int max = 0;
//        for(int i=0,j=0;i<s.length();i++)
//        {
//            char ch = s[i];
//            if(my_map.find(ch) != my_map.end())
//            {
//                //重复元素的后一个元素开始找，确保ij之间没有重复元素。
//                //确保不会回溯到太前的位置
//                // j = j>my_map[ch]+1?j:my_map[ch]+1;
//                j = my_map[ch]+1;
//            }

//            my_map[ch] = i;
//            if(i-j+1>max)max = i-j+1;
//        }
//        return max;

//    }
//};
