#include<iostream>
#include<vector>
using namespace std;


int searchInsert(vector<int>& nums, int target) {
    int l = 0;
    int r = nums.size()-1;
    int ans = r;
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
}

int main()
{
    return 0;
}
 // namespace std
