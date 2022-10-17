/*
给你二叉树的根节点 root ，返回其节点值的 层序遍历 。 （即逐层地，从左到右访问所有节点）。
*/
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root == nullptr) return {};
        vector<vector<int>> level_order;
        vector<TreeNode*> fake_queue;
        int front = -1,last = 0;
        fake_queue.push_back(root);
        TreeNode* p = nullptr;
        vector<int> one_layer;

        while((int)fake_queue.size()-1>front)
        {
            
            p = fake_queue[++front];
            one_layer.push_back(p->val);
            if(p->left != nullptr)
            {
                fake_queue.push_back(p->left);
            }
            if(p->right != nullptr)
            {
                fake_queue.push_back(p->right);
            }
            if(front == last)
            {
                last = fake_queue.size()-1;
                vector<int> temp_array(one_layer);
                level_order.push_back(temp_array);
                one_layer.clear();
            }

        }
        return level_order;
    }
};