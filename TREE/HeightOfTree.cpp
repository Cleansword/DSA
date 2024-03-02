#include<bits/stdc++.h>
using namespace std;
struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int data){
        val=data;
        left=right=NULL;
    }
};

int height(TreeNode* root){
    if(root==NULL) return 0;

    int lh=height(root->left);
    int lr=height(root->right);
    return 1+max(lh,lr);
}
int main(){
struct TreeNode* root=new TreeNode(5);
root->left=new TreeNode(7);
root->left->left=new TreeNode(3);
root->left->left->left=new TreeNode(1);
root->left->left->left->left=new TreeNode(1);
root->right=new TreeNode(10);
int Height=height(root);
cout<<Height<<endl;
}