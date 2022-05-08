/*
序列化是将一个数据结构或者对象转换为连续的比特位的操作，进而可以将转换后的数据存储在一个文件或者内存中，同时也可以通过网络传输到另一个计算机环境，采取相反方式重构得到原数据。

请设计一个算法来实现二叉树的序列化与反序列化。这里不限定你的序列 / 反序列化算法执行逻辑，你只需要保证一个二叉树可以被序列化为一个字符串并且将这个字符串反序列化为原始的树结构。

提示: 输入输出格式与 LeetCode 目前使用的方式一致，详情请参阅 LeetCode 序列化二叉树的格式。你并非必须采取这种方式，你也可以采用其他的方法解决这个问题。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/serialize-and-deserialize-binary-tree
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/


///**
// * Definition for a binary tree node.
// * struct TreeNode {
// *     int val;
// *     TreeNode *left;
// *     TreeNode *right;
// *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
// * };
// */
//class Codec {
//public:

//    // Encodes a tree to a single string.
//    string serialize(TreeNode* root) {
//        if(root==NULL)return "";
//        return to_string(root->val)+ "#" + serialize(root->left) + "#" +serialize(root->right);
//    }

//    // Decodes your encoded data to tree.
//    TreeNode* myDeserialize(string &data){
//        // cout<<data<<endl;
//        int i=0,j=0;
//        while(data[j]!='#')j++;
//        if(i==j){
//            if(data!="#")
//                data = data.substr(j+1,data.length());
//            return NULL;
//        }
//        string number = data.substr(0,j-i);
//        int val = atoi((char *)number.c_str());
//        data = data.substr(j+1,data.length());
//        TreeNode * p= new TreeNode(val);
//        p->left = myDeserialize(data);
//        p->right = myDeserialize(data);
//        return p;
//    }
//    TreeNode* deserialize(string data) {

//        // cout<<data<<endl;
//        if(data=="")return NULL;
//        return myDeserialize(data);
//    }
//};

//// Your Codec object will be instantiated and called as such:
//// Codec ser, deser;
//// TreeNode* ans = deser.deserialize(ser.serialize(root));
