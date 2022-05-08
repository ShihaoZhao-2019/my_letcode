/*
给你一个二叉树，请你返回其按 层序遍历 得到的节点值。 （即逐层地，从左到右访问所有节点）。
*/

//class Solution {
//public:
//    //用队列实现二叉树的层次遍历，且不使用循环队列保存结点信息，这个方法可以用来实现很多功能，如求二叉树的树高，求每一层的宽度等。
//    vector<vector<int>> levelOrder(TreeNode* root) {
//        vector<vector<int>> result;
//        if(root == nullptr) return result;
//        vector<int> temp;
//        vector<TreeNode *> nodeQueue(1200);
//        int front = -1;
//        int rear = -1;
//        int last = 0;

//        rear++;
//        nodeQueue[rear] = root;
//        TreeNode* p = nullptr;
//        while(front<rear)
//        {
//            front++;
//            p = nodeQueue[front];
//            temp.push_back(p->val);
//            if(p->left)
//            {
//                rear++;
//                nodeQueue[rear] = p->left;
//            }
//            if(p->right)
//            {
//                rear++;
//                nodeQueue[rear] = p->right;
//            }
//            if(front == last)
//            {

//                result.push_back(temp);
//                temp.clear();
//                last = rear;
//            }
//        }
//        return result;
//    }
//};
