/*
某种外星语也使用英文小写字母，但可能顺序 order 不同。字母表的顺序（order）是一些小写字母的排列。

给定一组用外星语书写的单词 words，以及其字母表的顺序 order，只有当给定的单词在这种外星语中按字典序排列时，返回 true；否则，返回 false。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/lwyVBB
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

//#include <ext/hash_map>
//using namespace __gnu_cxx;
//class Solution {
//public:
//    bool isAlienSorted(vector<string>& words, string order) {
//        hash_map<char,int> dict;
//        for(int i=0;i<order.length();i++)dict[order[i]] = i;
//        int flag = 1;
//        for(int i=1;i<words.size();i++)
//        {

//            string strLeft = words.at(i-1);
//            string strRight = words.at(i);
//            int strLength = min(strLeft.length(),strRight.length());
//            //比较两个字符串相同的部分
//            int j;
//            for(j=0;j<strLength;j++)
//            {
//                if(dict[strRight[j]]<dict[strLeft[j]])
//                {
//                    flag = 0;
//                    break;
//                }else if(dict[strRight[j]]>dict[strLeft[j]]) break;


//            }
//            if(flag == 0)break;
//            //能执行到这里说明两个字符串前面完全相同但是长度不同
//            if(j>=strRight.length()&&j>=strLeft.length()) break;
//            if(j>=strRight.length())
//            {
//                flag = 0;
//                break;
//            }

//        }
//        return flag;

//    }
//};
