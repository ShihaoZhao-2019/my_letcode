#include<iostream>
#include<string>

/*
请实现一个函数，把字符串 s 中的每个空格替换成"%20"。
*/
class Solution {
public:
    std::string replaceSpace(std::string s) {
        for(int i=0;i<s.size();i++)
        if(s[i] == ' ')
        {
            s.erase(s.begin()+i);
            s.insert(i,"%20");
        }
        return s;
    }
};
int main()
{
    return 0;       
}


/*
思路:
    用库函数，先擦除再插入。
*/