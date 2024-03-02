#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
    TreeNode(int data){
        val=data;
        left=right=NULL;
    }
};
void levelOrder(TreeNode* root,vector<vector<int>>&ans){
    queue<TreeNode*>q;
    if(root==NULL) return;
    q.push(root);
    while(!q.empty()){
        int size=q.size();
        vector<int>level;
        for(int i=0;i<size;i++){
            TreeNode * main=q.front();
            q.pop();
            if(main->left!=NULL) q.push(main->left);
            if(main->right!=NULL) q.push(main->right);
            level.push_back(main->val);
        }
        ans.push_back(level);
    }
}
int main(){
TreeNode * root=new TreeNode(4);
root->left=new TreeNode(41);
root->right=new TreeNode(42);
root->left->left=new TreeNode(45);
root->left->right=new TreeNode(34);
root->right->left=new TreeNode(24);
root->right->right=new TreeNode(14);
vector<vector<int>>ans;
levelOrder(root,ans);
for(int i=0;i<ans.size();i++){
    for(int j=0;j<ans[i].size();j++){
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
}

}