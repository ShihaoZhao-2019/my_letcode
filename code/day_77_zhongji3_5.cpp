/*
给定一个二叉搜索树的根节点 root ，和一个整数 k ，请你设计一个算法查找其中第 k 个最小元素（从 1 开始计数）。
*/

//class Solution {
//public:
//    int kthSmallest(TreeNode* root, int k) {
//    TreeNode *stack[1000];
//    int top = -1;
//    TreeNode *p = root;
//    while(p!=NULL||top!=-1){
//        if(p!=NULL){
//            stack[++ top] = p;

//            p = p->left;
//        }else{
//            p = stack[top --];
//            if(--k == 0) return p->val;

//            p = p->right;
//        }
//    }
//    return 0;
//    }
//};

//#include <ext/hash_map>
//using namespace __gnu_cxx;
//class Solution {
//public:
//    hash_map<int, int> mymap;
//public:

//    Solution(void)
//    {
//        mymap[-1] = -1;
//    }
//    //获取每一个子树有多少个结点
//    int getPNodeNumber(TreeNode* root,hash_map<int, int> &mymap){
//        if(root == nullptr)return 0;
//        int leftNumber = getPNodeNumber(root->left,mymap);
//        int rightNumber = getPNodeNumber(root->right,mymap);
//        mymap[root->val] = leftNumber+rightNumber+1;
//        return leftNumber+rightNumber+1;
//    }
//    //根据已有的结点信息进行查找k小的结点
//    int myKthSmallest(TreeNode* root, int k) {
//        if(root->left){
//            if(mymap[root->left->val]+1 == k) return root->val;
//            else if(mymap[root->left->val]+1 > k) return myKthSmallest(root->left,k);
//            else return myKthSmallest(root->right,k-(mymap[root->left->val]+1));
//        }else{
//            if(k==1) return root->val;
//            else return myKthSmallest(root->right,k-1);
//        }
//    }

//    int kthSmallest(TreeNode* root, int k) {
//        //只有第一次调用的时候才会生成哈希
//        if(mymap[-1]==-1){
//            getPNodeNumber(root,mymap);
//            //防止内部赋值的时候标记为被改变了
//            if(mymap[-1]==-1) mymap[-1] = 1;
//        }
//        return myKthSmallest(root,k);
//    }
//};
