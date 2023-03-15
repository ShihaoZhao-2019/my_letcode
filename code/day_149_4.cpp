/**
二分查找，两种一种找不到-1 一种找插入位置
*/
#include<iostream>
#include<vector>
using namespace std;

class Solution1 {
public:
int searchInsert(vector<int>& nums, int target) {
    int l = 0;
    int r = nums.size()-1;
    int ans = nums.size();
    while(l<=r)
    {
        int middle = (l+r)/2;
        if(nums[middle]>=target)
        {
            ans = middle;
            r = middle - 1;
        }else{
            l = middle + 1; 
        }
    }
    return ans;
}
};

class Solution2 {
public:
int search(vector<int>& nums, int target) {
    int l = 0,r =nums.size()-1;
    while(l<=r)
    {
        int middle = (l+r)/2;
        if(nums[middle]>target)
        {
            r = middle-1;
        }else if(nums[middle]<target)
        {
            l = middle + 1;
        }else
        {
            return middle;
        }
    }
    return -1;
}
};