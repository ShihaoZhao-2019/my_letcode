/*
给定一个包含红色、白色和蓝色、共 n 个元素的数组 nums ，原地对它们进行排序，使得相同颜色的元素相邻，并按照红色、白色、蓝色顺序排列。

我们使用整数 0、 1 和 2 分别表示红色、白色和蓝色。

必须在不使用库的sort函数的情况下解决这个问题。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/sort-colors
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

//class Solution {
//public:
///*
//p0前面一定全是0，p1前面全是0和1 如果p0 p1指的不是同一个地方，则p0指的一定是1,这样的话，后面找到0之后和p0换，换过来的一定是1，所以要将p1和当前位置再次换一下。
//*/
//    void sortColors(vector<int>& nums) {
//        int p0 = 0;
//        int p1 = 0;
//        for(int i=0;i<nums.size();i++){
//            if(nums[i]==0){
//                swap(nums[i],nums[p0]);

//                if(p0<p1)swap(nums[i],nums[p1]);
//                p0++;
//                p1++;
//            }else if(nums[i]==1){
//                swap(nums[i],nums[p1]);
//                p1++;
//            }
//        }
//    }
//};
