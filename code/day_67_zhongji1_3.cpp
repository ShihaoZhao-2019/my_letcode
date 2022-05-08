/*
给你一个字符串数组，请你将 字母异位词 组合在一起。可以按任意顺序返回结果列表。

字母异位词 是由重新排列源单词的字母得到的一个新单词，所有源单词中的字母都恰好只用一次。



作者：力扣 (LeetCode)
链接：https://leetcode-cn.com/leetbook/read/top-interview-questions-medium/xvaszc/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
*/

//方法1，我自己的方法（虽然超时）

//#include <ext/hash_map>
//using namespace __gnu_cxx;
//class Solution {
//public:
//    //判断两个字符串是否是字母字母异位词
//bool judgeTwo(string str1,string str2)
// {
//    //  //先用快速方法初步判断
//    //  char temp = 0;
//    //  for(char &ch : str1)temp ^= ch;
//    //  for(char &ch : str2) temp ^= ch;
//    //  if(temp)return !temp;
//     //再用哈希确定
//     hash_map<char, int> mymap(26);

//     for(char &ch : str1)
//     if(mymap.find(ch) == mymap.end())mymap[ch] = 1;
//     else ++mymap[ch];

//     for(char &ch : str2)
//     if(mymap.find(ch) == mymap.end())return 0;
//     else --mymap[ch];
//     //前面已经加减一遍了，一旦找到不为0的情况则直接返回0即可
//     for(char &ch : str1)if(mymap[ch]!=0)return 0;

//     return 1;





// }
//    vector<vector<string>> groupAnagrams(vector<string>& strs) {
//        vector<vector<string>> result;
//        if(strs.size()==0)return result;

//         //用于查看这个字符串是否已经被归类完成
//         vector<bool> visit(strs.size(),0);
//         //用于临时存储一类异位词
//         vector<string> temp;
//         for(int i=0;i<strs.size();i++)
//         {
//             //如果已经被归类完成则直接跳过
//             if(visit[i]) continue;

//             temp.push_back(strs[i]);
//             visit[i] = 1;
//             if(i+1<strs.size())for(int j=i+1;j<strs.size();j++)if(!visit[j])if(judgeTwo(strs[i],strs[j])){temp.push_back(strs[j]);visit[j]=1;}
//             result.push_back(temp);
//             temp.erase(temp.begin(),temp.end());
//         }
//         return result;
//    }
//};


//class Solution {
//public:
//    vector<vector<string>> groupAnagrams(vector<string>& strs) {
//		map<string,vector<string>> my_map;
//		vector<vector<string>> res;
//		string stort_s;
//		for(auto str:strs)
//		{
//			stort_s=str;
//			sort(stort_s.begin(), stort_s.end());
//            if(my_map.find(stort_s) == my_map.end())
//            {
//                vector<string> temp;
//                my_map[stort_s] = temp;
//            }
//			my_map[stort_s].push_back(str);
//		}
//		for(auto i:my_map) res.push_back(i.second);
//		return res;
//    }
//};


