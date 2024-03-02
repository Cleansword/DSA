#include<bits/stdc++.h>
using namespace std;
struct TreeNode{
    struct TreeNode* left;
    struct TreeNode* right;
    int val;
    TreeNode(int data){
        val=data;
        left=right=NULL;

    }
};
void traversal(TreeNode* root){
    if(root==NULL) return;
    traversal(root->left);
    cout<<root->val<<" ";
    traversal(root->right);
}
int main(){
struct TreeNode* root=new TreeNode(3);
root->left=new TreeNode(3);
root->right=new TreeNode(4);
root->left->right=new TreeNode(6);
traversal(root);
}