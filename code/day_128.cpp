/*
给你由 n 个小写字母字符串组成的数组 strs，其中每个字符串长度相等。

这些字符串可以每个一行，排成一个网格。例如，strs = ["abc", "bce", "cae"] 可以排列为：

abc
bce
cae
你需要找出并删除 不是按字典序升序排列的 列。在上面的例子（下标从 0 开始）中，列 0（'a', 'b', 'c'）和列 2（'c', 'e', 'e'）都是按升序排列的，而列 1（'b', 'c', 'a'）不是，所以要删除列 1 。

返回你需要删除的列数。

来源：力扣（LeetCode）
链接：https://leetcode.cn/problems/delete-columns-to-make-sorted
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/


class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int result = 0;
        vector<bool> del_col(strs[0].length(),0);
        for(int i=1;i<strs.size();i++){
            for(int j = 0;j<strs[0].length();j++){
                if(del_col[j] == 0){
                    if(strs[i][j] - strs[i-1][j]<0){
                        del_col[j] = 1;
                        result++;
                    }
                }
            }
        }
        return result;
    }
};
