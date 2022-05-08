/*
给定一个二叉树，检查它是否是镜像对称的。
*/

//class Solution {
//public:
//    //方法一迭代方法，非递归遍历二叉树，两个支路同时进行，比较是否相同
//    bool isSymmetric2(TreeNode* root) {
//        int result = 1;
//        TreeNode* p1 = root;
//        TreeNode* p2 = root;
//        vector<TreeNode*> stack1;
//        vector<TreeNode*> stack2;
//        while((p1||stack1.size()>0)&&(p2||stack2.size()>0))
//        {
//            //从左面遍历
//            if(p1)
//            {
//                stack1.push_back(p1);
//                p1 = p1->left;
//            }else
//            {
//                p1 = stack1.back();
//                stack1.pop_back();
//                p1 = p1->right;
//            }

//            //从右面遍历
//            if(p2)
//            {
//                stack2.push_back(p2);
//                p2 = p2->right;
//            }else
//            {
//                p2 = stack2.back();
//                stack2.pop_back();
//                p2 = p2->left;
//            }
//            //两个都是空进行下一次迭代
//            if(p1==nullptr&&p2==nullptr)continue;
//            //有一个是空直接返回不相等
//            else if((p1==nullptr&&p2!=nullptr)||(p1!=nullptr&&p2==nullptr))
//            {
//                result = 0;
//                break;
//            }

//            if(p1->val!=p2->val)
//            {
//                result = 0;
//                break;
//            }
//        }
//        return result;
//    }


//    bool meanWhile(TreeNode* p1,TreeNode* p2)
//    {
//        if(p1==nullptr&&p2==nullptr) return 1;
//        //有一个是空直接返回不相等
//        if((p1==nullptr&&p2!=nullptr)||(p1!=nullptr&&p2==nullptr)) return 0;

//        if(p1->val!=p2->val) return 0;
//        return meanWhile(p1->left,p2->right)&&meanWhile(p1->right,p2->left);

//    }
//    //方法二递归法
//    bool isSymmetric(struct TreeNode* root){
//        if(root == nullptr) return 1;
//        return meanWhile(root->left,root->right);

//    }
//};
