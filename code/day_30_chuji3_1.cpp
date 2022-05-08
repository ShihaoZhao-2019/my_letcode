/*
给你一个 32 位的有符号整数 x ，返回将 x 中的数字部分反转后的结果。

如果反转后整数超过 32 位的有符号整数的范围 [−231,  231 − 1] ，就返回 0。

作者：力扣 (LeetCode)
链接：https://leetcode-cn.com/leetbook/read/top-interview-questions-easy/xnx13t/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
*/

//#include<math.h>
//class Solution {
//public:
//    int reverse(int x) {
//        vector<int> maxValue{ 2,1,4,7,4,8,3,6,4,7 };
//        if(x == -2147483648) return 0;
//        unsigned int result = 0;
//        int flag  = 1;
//        if(x<0)
//        {
//           flag = -1;
//           x*=-1;
//        }

//        vector<int> nums;
//        while(x!=0)
//        {
//            nums.push_back(x%10);
//            x = x/10;
//        }
//        if(nums.size()==10)
//        {
//            int result = 0;
//            for(int i=0;i<10;i++)
//            {
//                if(nums[i] == maxValue[i])continue;
//                else if(nums[i] > maxValue[i])
//                {
//                    result = 1;
//                    break;
//                }else
//                {
//                    result = 0;
//                    break;
//                }
//            }
//            if(result) return 0;
//        }
//        for(int i=0;i<nums.size();i++)
//        {
//            result = result + nums[i]*(pow(10,nums.size()-i-1));
//        }
//        return result*flag;
//    }
//};
