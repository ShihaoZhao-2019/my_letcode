/***
给你一个整数数组 nums ，其中元素已经按 升序 排列，请你将其转换为一棵 高度平衡 二叉搜索树。

高度平衡 二叉树是一棵满足「每个节点的左右两个子树的高度差的绝对值不超过 1 」的二叉树。

作者：力扣 (LeetCode)
链接：https://leetcode-cn.com/leetbook/read/top-interview-questions-easy/xninbt/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
***/

//class Solution {
//public:
//    //先创建完全二叉树，再中序遍历逐个赋值
//    //创建一个指定结点数的完全二叉树
//    void buildAbsoTree(TreeNode* &node,int &remianNodeNum)
//    {
//        if(remianNodeNum==0) return;
//        queue<TreeNode *> nodeQueue;
//        node = new TreeNode(1);
//        if(remianNodeNum==1) return;

//        nodeQueue.push(node);
//        remianNodeNum--;
//        for(int i=remianNodeNum;i>0;)
//        {
//            nodeQueue.front()->left = new TreeNode(nodeQueue.front()->val+1);
//            nodeQueue.push(nodeQueue.front()->left);
//            i--;
//            if(i<=0)break;
//            nodeQueue.front()->right = new TreeNode(nodeQueue.front()->val+1);
//            nodeQueue.push(nodeQueue.front()->right);
//            i--;

//            nodeQueue.pop();
//        }

//    }
//    //中序非递归遍历二叉树给结点赋值
//    void preOrder(TreeNode *T,vector<int> nums){
//    TreeNode *stack[15];
//    int top = -1;
//    TreeNode *p = T;
//    int index= 0;
//    while(p!=NULL||top!=-1)
//    {
//        if(p!=NULL){
//            stack[++ top] = p;

//            p = p->left;
//        }else{
//            p = stack[top--];
//            p->val = nums[index++];
//            // cout<<p->val<<endl;
//            p = p->right;
//        }
//    }//while
//    }

//    TreeNode* sortedArrayToBST2(vector<int>& nums) {

//    int nodeNum = nums.size();

//    TreeNode* root = nullptr;
//    buildAbsoTree(root,nodeNum);
//    preOrder(root,nums);
//    return root;
//    }
//    方法二：二分递归法
//    TreeNode* middleNode(vector<int> &nums,int left,int right)
//    {
//        if(left>right) return nullptr;
//        int middle = left+ (right-left)/2;
//        TreeNode* root = new TreeNode(nums[middle]);
//        root->left = middleNode(nums,left,middle-1);
//        root->right = middleNode(nums,middle+1,right);
//        return root;
//    }

//    TreeNode* sortedArrayToBST(vector<int>& nums) {
//    int nodeNum = nums.size();
//    if(nodeNum==0)return nullptr;
//    return middleNode(nums,0,nodeNum-1);
//    }
//};
