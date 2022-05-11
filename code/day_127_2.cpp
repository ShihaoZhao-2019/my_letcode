/*
序列化是将数据结构或对象转换为一系列位的过程，以便它可以存储在文件或内存缓冲区中，或通过网络连接链路传输，以便稍后在同一个或另一个计算机环境中重建。

设计一个算法来序列化和反序列化 二叉搜索树 。 对序列化/反序列化算法的工作方式没有限制。 您只需确保二叉搜索树可以序列化为字符串，并且可以将该字符串反序列化为最初的二叉搜索树。

编码的字符串应尽可能紧凑。

来源：力扣（LeetCode）
链接：https://leetcode.cn/problems/serialize-and-deserialize-bst
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
//思路为，编码的时候获得先序遍历和中序遍历，解码的时候根据先序遍历和中序遍历重构二叉树
class Codec {
public:
    // 0 is preorder,1 is inorder
    string traversing_tree(TreeNode* root){
        string resultp;
        string resulti;
        vector<unsigned char> result_char;
        vector<unsigned char> result_char2;
        vector<TreeNode *> stack;
        vector<int> tempp;
        TreeNode *p = root;
        while(p!=NULL||stack.size()>0){
            if(p!=NULL){
                //先序
                    int tem = p->val;         
                    while(tem>0){
                        tempp.push_back(tem%10);
                        tem/=10;
                    }
                    while(tempp.size()>0){
                        result_char.push_back(tempp.back());
                        tempp.pop_back();
                    }
                    
                    result_char.push_back(0xff);
                stack.push_back(p);
                p = p->left;
            }else{
                p = stack.back();
                //中序
                    int tem = p->val;
                    while(tem>0){
                        tempp.push_back(tem%10);
                        tem/=10;
                    }
                    while(tempp.size()>0){
                        result_char2.push_back(tempp.back());
                        tempp.pop_back();
                    }
                    result_char2.push_back(0xff);
                stack.pop_back();
                p = p->right;
            }
            
        }
        resultp.assign(result_char.begin(),result_char.end());
        resulti.assign(result_char2.begin(),result_char2.end());
        return resultp+resulti;
    }
    // Encodes a tree to a single string.
    string serialize(TreeNode* root){
        return traversing_tree(root);
    }

    //根先序和后序遍历重构儿二叉树
    TreeNode* rebuildTree(vector<int> &preorder_tree,vector<int> &inorder_tree,int pLeft,int pRight,int iLeft,int iRight ){
        if(pRight<pLeft)return NULL;
        int root_val = preorder_tree[pLeft];
        int root_index_in;
        for(int i=iLeft;i<=iRight;i++)if(inorder_tree[i]==root_val){root_index_in = i-iLeft;break;}
        TreeNode* root = new TreeNode(root_val);
        root->left = rebuildTree(preorder_tree,inorder_tree,pLeft+1,pLeft+root_index_in,iLeft,iLeft+root_index_in-1);
        root->right = rebuildTree(preorder_tree,inorder_tree,pLeft+root_index_in+1,pRight,iLeft+root_index_in+1,iRight);
        return root;

    }
    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        string preorder_tree;
        string inorder_tree;
        preorder_tree.assign(data.begin(),data.begin()+data.length()/2);
        inorder_tree.assign(data.begin()+data.length()/2,data.end());
        vector<int> preorder_tree_vector;
        vector<int> inorder_tree_vector;
        int temp = 0;
        for(unsigned char val:preorder_tree){
            if(val!=255){
                temp = temp*10 + val;
            }else{
                preorder_tree_vector.push_back(temp);
                temp = 0;
            }
        }
        temp = 0;
        for(unsigned char val:inorder_tree){
            if(val!=255){
                temp = temp*10 + val;
            }else{
                inorder_tree_vector.push_back(temp);
                temp = 0;
            }
        }
        int n = preorder_tree_vector.size();
        TreeNode* result_root = rebuildTree(preorder_tree_vector,inorder_tree_vector,0,n-1,0,n-1);
        return result_root;
    }
};
