/**
把一个数组最开始的若干个元素搬到数组的末尾，我们称之为数组的旋转。

给你一个可能存在 重复 元素值的数组 numbers ，它原来是一个升序排列的数组，并按上述情形进行了一次旋转。请返回旋转数组的最小元素。例如，数组 [3,4,5,1,2] 为 [1,2,3,4,5] 的一次旋转，该数组的最小值为 1。  

注意，数组 [a[0], a[1], a[2], ..., a[n-1]] 旋转一次 的结果为数组 [a[n-1], a[0], a[1], a[2], ..., a[n-2]] 。

来源：力扣（LeetCode）
链接：https://leetcode.cn/problems/xuan-zhuan-shu-zu-de-zui-xiao-shu-zi-lcof
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

*/
#include<iostream>
#include<vector>

// log(n)算法
int minArray(std::vector<int>& numbers) {
    if(numbers.size() == 1)return numbers[0];
    int previous = numbers[0];
    for(int i=1;i<numbers.size();i++)
    {
        if(numbers[i]<previous)
        {
            return numbers[i];
        }
        previous = numbers[i];
    } 
    return numbers[0];
}

//二分算法 lon（n）
int minArray(std::vector<int>& numbers) {
    int l = 0,r = numbers.size()-1;
    while(l<r)
    {
        int middle = (l + r)/2;
        if(numbers[middle]>numbers[middle+1])
        {
            return numbers[middle+1];
        }else if (numbers[middle]<numbers[r])
        {
            r = middle;
        }
        else if(numbers[middle]>numbers[r])
        {
            l = middle + 1;
        }
        else{
            r--;
        } 
    }
    return numbers[l];
}
int main()
{
    return 0;
}

/**
 * 二分法思路， 旋转后的序列为两个递增序列，用二分法：确保区间总是包含跳变点
 * numbers[middle]>numbers[middle+1] 肯定middle + 1 为结果
 * numbers[middle]<numbers[r]则middle位于右面的递增序列r = middle 一定包含跳变点
 * numbers[middle]>numbers[r]则middle位于左面的递增序列又因为middle一定不是跳变点（第一点排除）故l = middle + 1
 * r--
 * 
*/