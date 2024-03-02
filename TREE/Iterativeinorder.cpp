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
void inorder(TreeNode* root,vector<int>&ans){
    stack<TreeNode*>st;
    TreeNode* node=root;
    while(true){
        if(node!=NULL){
            st.push(node);
            node=node->left;
        }
        else{
            if(st.empty()==true) break;
            node=st.top();
            st.pop();
            ans.push_back(node->val);
            node=node->right;
        }
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
    inorder(root,ans);
    for(int i=0;i<ans.size();i++) {
        cout<<ans[i]<<" ";
    }

}