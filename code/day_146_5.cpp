#include<iostream>
#include<vector>

/**
在一个 n * m 的二维数组中，每一行都按照从左到右 非递减 的顺序排序，每一列都按照从上到下 非递减 的顺序排序。请完成一个高效的函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。

来源：力扣（LeetCode）
链接：https://leetcode.cn/problems/er-wei-shu-zu-zhong-de-cha-zhao-lcof
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/
class Solution {
public:
    void preOrder(std::vector<std::vector<int>>& matrix,int i,int j,int target,int &exist_flag)
    {
        if(i>=matrix.size()||j<0)return;
        if(target == matrix[i][j])
        {
            exist_flag = true;
        }
        if(exist_flag == false && matrix[i][j]>target)
        {
            preOrder(matrix,i,j-1,target,exist_flag);
        }
        else if(exist_flag == false && matrix[i][j]<target)
        {
            preOrder(matrix,i+1,j,target,exist_flag);
        }
    }
    bool findNumberIn2DArray(std::vector<std::vector<int>>& matrix, int target) {
        int result = false;
        if(matrix.size() == 0)return result;
        preOrder(matrix,0,matrix[0].size()-1,target,result);
        return result;
    }
};

int main()
{
    return 0;       
}


/*
思路:
    这种序列从右上角看可以看成一个二叉搜索树，所以定在右上角，对这棵树进行二叉搜索树遍历即可
*/