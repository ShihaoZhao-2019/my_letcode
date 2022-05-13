/*
面试题 01.05. 一次编辑
字符串有三种编辑操作:插入一个字符、删除一个字符或者替换一个字符。 给定两个字符串，编写一个函数判定它们是否只需要一次(或者零次)编辑
*/
class Solution {
public:
    bool oneEditAway(string first, string second) {
        int  first_length = first.length();
        int second_length = second.length();

        int flag=0;
        //长度相同，只允许替换一个
        if(first_length==second_length){
            for(int i=0;i<first_length;i++){
                if(first[i]!=second[i]){
                    flag++;
                }
                if(flag>1)break;
            }
        //长度相差1，判断一次是否可以
        }else if(abs(first_length-second_length)==1){
            
            for(int i=0;i<(first_length<second_length?first_length:second_length);i++){
                cout<<i<<endl;
                if(first_length>second_length){
                    if(first[i+flag]!=second[i]){
                        flag++;
                        i--;
                    }
                }else{
                    if(first[i]!=second[i+flag]){
                        flag++;
                        i--;
                    }
                }
                if(flag>1)break;
            }
        }else{
            flag = 2;
        }
        return flag>1?0:1;
    }
};
