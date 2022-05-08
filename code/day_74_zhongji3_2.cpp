/*
给你二叉树的根节点 root ，返回其节点值的 锯齿形层序遍历 。（即先从左往右，再从右往左进行下一层遍历，以此类推，层与层之间交替进行）
*/


//class Solution {
//public:
//    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
//        vector<vector<int>> result;
//        vector<int> layerTemp;
//        bool reverseFlag = 0;
//        if(root == nullptr) return result;
//        vector<TreeNode*> queue(2002);

//        int front = -1;
//        int rear = -1;
//        int last = 0;

//        TreeNode *p = nullptr;
//        queue[++rear] = root;
//        while(front<rear)
//        {
//            p = queue[++front];
//            layerTemp.push_back(p->val);
//            if(p->left) queue[++rear] = p->left;
//            if(p->right) queue[++rear] = p->right;
//            if(front == last)
//            {
//                if(reverseFlag) reverse(layerTemp.begin(),layerTemp.end());
//                reverseFlag = !reverseFlag;
//                result.push_back(layerTemp);
//                layerTemp.clear();
//                last = rear;
//            }

//        }
//        return result;
//    }
//};
