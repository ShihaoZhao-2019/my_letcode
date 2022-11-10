
/*
给定一个字符串 s ，请你找出其中不含有重复字符的 最长子串 的长度。
*/
#include<map>
class Solution {
public:
    int judge_repeated(string s,int left,int right,int val)
    {
        int index = left;
        while(index<=right)
        {
            if(s[index] == val)
            {
                return index;
            }
            index ++;
        }
        return -1;
    }
    int judge_repeated(map<char, int> my_map,int val)
    {
        auto iter = my_map.find(val);
        if(iter == my_map.end())
        {
            return -1;
        }else
        {
            return iter->second;
        }
    }
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0) return 0;
        map<char, int> my_map;
        my_map[s[0]] = 0;
        int left = 0;
        int right = 1;
        int max_length = right - left;
        int repeat_index;
        while(right<s.length())
        {   
            repeat_index = judge_repeated(my_map,s[right]);
            if(repeat_index != -1)
            {
                for(int i = left; i<=repeat_index;i++)my_map.erase(my_map.find(s[i]));
                left = repeat_index + 1;
            }
            if(right<s.length()) my_map[s[right]] = right;
            right ++;
            max_length = right - left > max_length ? right - left:max_length;
        }
        return max_length;

        
    }
};