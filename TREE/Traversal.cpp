#include<bits/stdc++.h>
using namespace std;
struct TreeNode{
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
    TreeNode(int data){
        val=data;
        left=right=NULL;
    }
};

// DFS
// inorder Traversal ( left root right)

void InorderTraversal(TreeNode* root){
    if(root==NULL) return ;
    InorderTraversal(root->left);
    cout<<root->val<<" ";
    InorderTraversal(root->right);
}

//PreOrder Traversal (root left right)

void PreOrderTraversal(TreeNode* root){
    if(root==NULL) return ;
    cout<<root->val<<" ";
    PreOrderTraversal(root->left);
    PreOrderTraversal(root->right);
}

//PostOrder Traversal (left right root)

void PostOrderTraversal(TreeNode* root){
    if(root==NULL) return ;
    PostOrderTraversal(root->left);
    PostOrderTraversal(root->right);
    cout<<root->val<<" ";
}

//BFS
//LevelOrder Taversal 
vector<int> LevelOrderTraversal(TreeNode* root){
    
    vector<int>ans;
    if(root==NULL) return ans;
    queue<TreeNode*>q;
    q.push(root);
    while(!q.empty()){
        TreeNode * node=q.front();
        q.pop();
      if(node->left!=NULL) q.push(node->left);
      if(node->right!=NULL) q.push(node->right);
      
      ans.push_back(node->val);
    }
    return ans;

}

int main(){
    struct TreeNode* root=new TreeNode(6);
    root->left=new TreeNode(7);
    root->right=new TreeNode(9);
    root->left->left=new TreeNode(3);
    root->right->left=new TreeNode(2);
    root->right->right=new TreeNode(10);
    cout<<"Inorder Traversal "<<endl;
    InorderTraversal(root);
    cout<<endl;
    cout<<"PreOrder Traversal "<<endl;
    PreOrderTraversal(root);
    cout<<endl;
    cout<<"PostOrder Traversal "<<endl;
    PostOrderTraversal(root);
    cout<<endl;
    cout<<"LevelOrder Traversal"<<endl;
    vector<int>a=LevelOrderTraversal(root);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }


}