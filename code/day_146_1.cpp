/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
// class Solution {
// public:
// TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) 
// {
//     std::vector<TreeNode *> left_satck;
//     std::vector<TreeNode *> right_satck;
//     std::vector<TreeNode *> my_stack;
//     TreeNode* prev = NULL;
//     while ((root || !my_stack.empty()) && (left_satck.size()==0||right_satck.size()==0)) {
//         while (root) {
//             my_stack.push_back(root);
//             root = root->left;
//         }

//         TreeNode* curr = my_stack.back();

//         if (curr->right && curr->right != prev) {
//             root = curr->right;
//         } else {
            
//             if(curr == p)
//             {
//                 left_satck.assign(my_stack.begin(),my_stack.end());
//             }
//             if(curr == q)
//             {
//                 right_satck.assign(my_stack.begin(),my_stack.end());
//             }
//             my_stack.pop_back();
//             prev = curr;
//         }
//     }

//     if(left_satck.size()>0&&right_satck.size()>0)
//     {
//         TreeNode * last = nullptr;
//         for(int i=0;i<left_satck.size()&&i<right_satck.size();i++)
//         {
//             if(left_satck.at(i)!=right_satck.at(i))
//             {
//                 return last;
//             }else{
//                 last = left_satck.at(i);
//             }

//         }
//         return left_satck.size()<right_satck.size()?left_satck.back():right_satck.back();
//     }else{
//         return nullptr;
//     }
// }
// };

// 方法：后续非递归二叉树，然后找到两个结点的时候将栈中剩余结点存储起来，之后跳出遍历循环比较两个数组，从左右向右找到第一个不一样的结点的时候，此时前一个结点就是最近的公共祖先。
