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
void Preorder(TreeNode* root,vector<int>&ans){
    if(root==NULL) return;
    stack<TreeNode*>st;
    st.push(root);
    while(!st.empty()){
        root=st.top();
        st.pop();
        ans.push_back(root->val);
        if(root->right !=NULL) st.push(root->right);
        if(root->left !=NULL) st.push(root->left);
    }
}
int main(){
    struct TreeNode* root=new TreeNode(6);
    root->left=new TreeNode(41);
    root->right=new TreeNode(42);
    root->left->left=new TreeNode(45);
    root->left->right=new TreeNode(34);
    root->right->left=new TreeNode(24);
    root->right->right=new TreeNode(14);
    vector<int>ans;
    Preorder(root,ans);
    for(int i=0;i<ans.size();i++) {
        cout<<ans[i]<<" ";
    }

}