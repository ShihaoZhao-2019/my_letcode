/*
6. Z 字形变换
将一个给定字符串 s 根据给定的行数 numRows ，以从上往下、从左到右进行 Z 字形排列。

比如输入字符串为 "PAYPALISHIRING" 行数为 3 时，排列如下：

P   A   H   N
A P L S I I G
Y   I   R
之后，你的输出需要从左往右逐行读取，产生出一个新的字符串，比如："PAHNAPLSIIGYIR"。
*/


class Solution {
public:
    
    string convert(string s, int numRows) {
        if(numRows==1)return s;
        int state_all = numRows + numRows-2;
        string result;
        vector<vector<unsigned char>> z_Array(numRows);
        for(int i=0;i<s.length();i++){
            int state = i%state_all;
            if(state>=numRows){
                int state_up = numRows-(state-numRows)-2;
                z_Array[state_up].push_back(s[i]);
            }else{
                int state_down = state;
                z_Array[state_down].push_back(s[i]);
            }
        }
        for(int i=0;i<numRows;i++){
            string str;
            str.assign(z_Array[i].begin(),z_Array[i].end());
            result+=str;
        }
        return result;
    }
};
