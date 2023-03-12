// 输入某二叉树的前序遍历和中序遍历的结果，请构建该二叉树并返回其根节点。

// 假设输入的前序遍历和中序遍历的结果中都不含重复的数字。

// class Solution {
// public:
//     TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
//         return build(preorder, inorder, 0, preorder.size() - 1, 0, inorder.size() - 1);
//     }

//     TreeNode* build(vector<int>& preorder, vector<int>& inorder, int preStart, int preEnd, int inStart, int inEnd) {
//         if (preStart > preEnd) {
//             return nullptr;
//         }

//         int rootVal = preorder[preStart];
//         int rootIndex = inStart;
//         while (rootIndex <= inEnd && inorder[rootIndex] != rootVal) {
//             rootIndex++;
//         }

//         int leftSize = rootIndex - inStart;

//         TreeNode* root = new TreeNode(rootVal);
//         root->left = build(preorder, inorder, preStart + 1, preStart + leftSize, inStart, rootIndex - 1);
//         root->right = build(preorder, inorder, preStart + leftSize + 1, preEnd, rootIndex + 1, inEnd);

//         return root;
//     }
// };

/*
思路：递归的完成，根据先序遍历第一个结点划分中序遍历，然后将第一个结点创建出来作为根节点，之后递归的生成其左右结点，传入划分之后的前序和中序

*/