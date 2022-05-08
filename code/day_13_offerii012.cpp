/*
数组 中心下标 是数组的一个下标，其左侧所有元素相加的和等于右侧所有元素相加的和。

如果中心下标位于数组最左端，那么左侧数之和视为 0 ，因为在下标的左侧不存在元素。这一点对于中心下标位于数组最右端同样适用。

如果数组有多个中心下标，应该返回 最靠近左边 的那一个。如果数组不存在中心下标，返回 -1 。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/tvdfij
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

//class Solution {
//public:
//    int pivotIndex(vector<int>& nums) {
//        int length = nums.size();
//        vector<int> left(length);
//        vector<int> right(length);
//        left.at(0) = 0;
//        right.at(length-1) = 0;
//        for(int i = 1;i<length;i++)
//        {
//            left.at(i) = left.at(i-1) + nums.at(i-1);
//            right.at(length-i-1) =  right.at(length-i) + nums.at(length-i);
//        }
//        int result = -1;
//        for(int i=0;i<length;i++)
//        {
//            if(left.at(i) == right.at(i))
//            {
//                result = i;
//                break;
//            }
//        }
//        return result;

//    }
//};
