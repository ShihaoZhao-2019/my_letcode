/*题目描述
给你一个整数 n 。按下述规则生成一个长度为 n + 1 的数组 nums ：

nums[0] = 0
nums[1] = 1
当 2 <= 2 * i <= n 时，nums[2 * i] = nums[i]
当 2 <= 2 * i + 1 <= n 时，nums[2 * i + 1] = nums[i] + nums[i + 1]
返回生成数组 nums 中的 最大 值。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/get-maximum-in-generated-array
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

#include<iostream>
using namespace std;


class Solution {
public:
    int qusort(int s[],int start,int end)    //自定义函数 qusort()
    {
        int i,j;    //定义变量为基本整型
        i=start;    //将每组首个元素赋给i
        j = end;    //将每组末尾元素赋给j
        s[0]=s[start];    //设置基准值
        while(i<j)
        {
            while(i<j&&s[0]<s[j])
            j--;    //位置左移
            if(i<j)
            {
                s[i]=s[j];    //将s[j]放到s[i]的位置上
                i++;    //位置右移
            }
            while(i<j&&s[i]<=s[0])
                i++;    //位置左移
            if(i<j)
            {
                s[j]=s[i];    //将大于基准值的s[j]放到s[i]位置
                j--;    //位置左移
            }
        }
        s[i]=s[0];    //将基准值放入指定位置
        if (start<i)
            qusort(s,start,j-1);    //对分割出的部分递归调用qusort()函数
        if (i<end)
            qusort(s,j+1,end);
        return s[end];
    }
    int getMaximumGenerated(int n) {
    int nums[n+1];
    if(n==0) return 0;
    nums[0] = 0;
    nums[1] = 1;
    for (int i=0;i<=(n+1)/2;i++){
        if(2*i>=2&&2*i<=n) nums[2 * i] = nums[i];
        if(2*i+1>=2&&2*i+1<=n) nums[2*i+1] = nums[i] + nums[i+1];
    }
    return qusort(nums,1,n);
 }
};
