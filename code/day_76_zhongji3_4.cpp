/*
给定一个 完美二叉树 ，其所有叶子节点都在同一层，每个父节点都有两个子节点。二叉树定义如下：

struct Node {
  int val;
  Node *left;
  Node *right;
  Node *next;
}
填充它的每个 next 指针，让这个指针指向其下一个右侧节点。如果找不到下一个右侧节点，则将 next 指针设置为 NULL。

初始状态下，所有 next 指针都被设置为 NULL。

作者：力扣 (LeetCode)
链接：https://leetcode-cn.com/leetbook/read/top-interview-questions-medium/xvijdh/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
*/



//class Solution {
//public:
//    Node* connect(Node* root) {
//    if(root == nullptr) return root;
//    vector<Node* > nodeQueue(5000);
//    int front = -1;
//    int rear = -1;
//    int last = 0;

//    rear++;
//    nodeQueue[rear] = root;
//    Node* p = nullptr;
//    Node* pre = nullptr;
//    while(front<rear)
//    {
//        front++;
//        p = nodeQueue[front];

//        if(pre == nullptr) pre = p;
//        else{
//            pre->next = p;
//            pre = p;
//        }
//        if(p->left)
//        {
//            rear++;
//            nodeQueue[rear] = p->left;
//        }
//        if(p->right)
//        {
//            rear++;
//            nodeQueue[rear] = p->right;
//        }
//        if(front == last)
//        {
//            p->next = nullptr;
//            pre = nullptr;
//            last = rear;
//        }
//    }
//    return root;
//    }
//};


//class Solution {
//public:
//    void inOrder(Node* root)
//    {
//        if(root == NULL || root->left == NULL) return ;
//        root->left->next = root->right;
//        if(root->next) root->right->next = root->next->left;
//        inOrder(root->left);
//        inOrder(root->right);
//    }
//    Node* connect(Node* root) {
//        inOrder(root);
//        return root;
//    }
//};
