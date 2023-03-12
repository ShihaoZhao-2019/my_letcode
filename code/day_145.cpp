/*
有 n 个盒子。给你一个长度为 n 的二进制字符串 boxes ，其中 boxes[i] 的值为 '0' 表示第 i 个盒子是 空 的，而 boxes[i] 的值为 '1' 表示盒子里有 一个 小球。

在一步操作中，你可以将 一个 小球从某个盒子移动到一个与之相邻的盒子中。第 i 个盒子和第 j 个盒子相邻需满足 abs(i - j) == 1 。注意，操作执行后，某些盒子中可能会存在不止一个小球。

返回一个长度为 n 的数组 answer ，其中 answer[i] 是将所有小球移动到第 i 个盒子所需的 最小 操作数。

每个 answer[i] 都需要根据盒子的 初始状态 进行计算。

 

来源：力扣（LeetCode）
链接：https://leetcode.cn/problems/minimum-number-of-operations-to-move-all-balls-to-each-box
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/


#include <string>
#include <vector>
#include <cassert>
using namespace std;
class Solution {
public:
    vector<int> minOperations2(string boxes)
    {
        answer = vector<int>(boxes.length(),0);
        //初始化加入所有盒子都有球的情况下的结果，并且初始化无球列表
        for(int i=0;i<boxes.length();i++)
        {
            step_left = getStep(i-0);
            step_right = getStep(boxes.length()-i-1);
            assert(step_left>=0 && step_right>=0);
            answer[i] = step_left + step_right;

            if(boxes[i] == '0')
            {
                empty_box_list.push_back(i);
            }
        }

        for(int i=0;i<boxes.length();i++)
        {
            for(auto &step:empty_box_list)
            {
                answer[i] -= abs(i-step);
            }
        }

        return answer;
    }
/*
 * 对于每一个位置，把所有球移动到此位置所需的步数为将所有球移动到其左面的步数加上目前位置左面的球的数量减去右面球的数量（右面球的数量要包含其自身，所有右面球数量在上一次循环中计算得出）
 * 所以只需要计算把所有球移动到第一个位置需要的步数即可
 * 之后动态记录每个位置左面球的数量和右面球的数量即可
*/
    vector<int> minOperations(string boxes)
    {
        n_step = 0,left_not_empty=boxes[0]-'0',right_not_empty=0;
        answer = vector<int>(boxes.length(),0);
        

        for(int i=1;i<boxes.length();i++)
        {
            if(boxes[i] == '1')
            {
                right_not_empty++;
                n_step += i;
            }
        }
        answer[0] = n_step;

        for(int i=1;i<boxes.length();i++)
        {
            n_step += left_not_empty -  right_not_empty;
            if(boxes[i] == '1')
            {
                left_not_empty++;
                right_not_empty--;
            }
            answer[i] = n_step;
        }
        return answer;

    }
private:
    int getStep(int x)
    {
        if(x<0)
        {
            return -1;
        }
        if(x==0)
        {
            return 0;
        }
        return x*(x+1)/2;
    }
private:
    vector<int> answer;
    int step_left;
    int step_right;
    vector<int> empty_box_list;

    int n_step;
    int left_not_empty;
    int right_not_empty;
};
