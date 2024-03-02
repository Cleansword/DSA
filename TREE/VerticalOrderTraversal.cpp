
#include <bits/stdc++.h>
using namespace std;
struct TreeNode{
    int val;
    struct TreeNode *left,*right;
    TreeNode(int data){
        val=data;
        left=right=NULL;
    }
};
vector<vector<int>> findVertical(TreeNode *root)
{
    map<int,map<int,multiset<int>>>nodes;
    queue<pair<TreeNode*,pair<int,int>>>todo;
    todo.push({root,{0,0}}); 
    while(!todo.empty())
    {
        auto p = todo.front();
        todo.pop();
        TreeNode* temp=p.first;
        int x=p.second.first, y=p.second.second;
        nodes[x][y].insert(temp->val);
        if (temp->left) todo.push({temp->left,{x - 1,y + 1}});
        if (temp->right) todo.push({temp->right,{x + 1,y + 1}});  
    }
    vector<vector<int>>ans;
    for (auto p : nodes){
        vector<int> col;
        for (auto q : p.second) col.insert(col.end(), q.second.begin(), q.second.end());
        ans.push_back(col);
    }
    return ans;
}
int main()
{
    struct TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(10);
    root->left->left->right = new TreeNode(5);
    root->left->left->right->right = new TreeNode(6);
    root->right = new TreeNode(3);
    root->right->left = new TreeNode(9);
    root->right->right = new TreeNode(10);

    vector<vector<int>> verticalTraversal;
    verticalTraversal = findVertical(root);

    cout << "The Vertical Traversal is : " << endl;
    for (auto vertical : verticalTraversal)
    {
        for (auto nodeVal : vertical)
        {
            cout << nodeVal << " ";
        }
        cout << endl;
    }
    return 0;
}