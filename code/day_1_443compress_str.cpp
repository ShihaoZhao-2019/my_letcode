#include<iostream>
#include<vector>
using namespace std;






//c
//int compress(char* chars, int charsSize){
//    int post = 1;
//    int pre = 0;
//    int i = 0;
//    while(post<charsSize)
//    {
//        while((chars[pre] == chars[post]) && post<charsSize) post++;

//        if(post-pre>1&&post-pre<10) chars[++i] = post-pre + '0';
//        else if(post-pre>=10){
//            chars[++i] = (post-pre)/10 + '0';
//            chars[++i] = (post-pre)%10 + '0';
//        }
//        if(post==charsSize)
//            break;

//        chars[++i] = chars[post];
//        pre = post++;

//    }
//    return i+1;
// }

////cpp
//class Solution {
//public:
//    static int compress(vector<char>& chars) {
//        int post = 1;
//        int pre = 0;
//        int i = 0;
//        while(post<chars.size())
//        {
//            while((chars[pre] == chars[post]) && post<chars.size()) post++;

//            if(post-pre>1&&post-pre<10) chars[++i] = post-pre + '0';
//            else if(post-pre>=10){
//                chars[++i] = (post-pre)/10 + '0';
//                chars[++i] = (post-pre)%10 + '0';
//            }
//            if(post==chars.size())
//                break;

//            chars[++i] = chars[post];
//            pre = post++;

//        }
//        return i+1;
//     }
//};




//int main()
//{
////    char a[15] = {'a','b','b','c','d','d','d','d','d','d','d','d','d','d','d'};
//    char a[2] = {'a','a'};
////    vector<char> b;
//    //将a的所有元素插入到b中
////    b.insert(b.begin(), a, a+2);
////    int new_long = Solution::compress(b);
//    int new_long = compress(a,2);
//    for(int i=0;i<new_long;i++)
//        cout<<a[i]<<endl;

//    return 0;
//}
