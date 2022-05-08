/*
给你无向 连通 图中一个节点的引用，请你返回该图的 深拷贝（克隆）。

图中的每个节点都包含它的值 val（int） 和其邻居的列表（list[Node]）。
*/



//class Solution {
//public:
//    unordered_map<Node*, Node*> visited;
//    Node* dfs(Node* v){
//        if(visited.find(v)!=visited.end())return visited[v];
//        Node* cloneNode = new Node(v->val);
//        visited[v] = cloneNode;
//        for(auto &p:v->neighbors){
//            cloneNode->neighbors.push_back(dfs(p));
//        }
//        return cloneNode;
//    }
//    Node* cloneGraph(Node* node) {
//        if(node == nullptr) return nullptr;
//        return dfs(node);

//    }
//};
