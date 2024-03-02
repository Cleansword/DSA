#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter number of nodes and edges"<<endl;
    cin>>n>>m;
    vector<int>adj[n+1];
    cout<<"enter u and v"<<endl;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u); // it will be remove in the case of directed grpah
    }

    for(int i=0;i<=n;i++){
        for(int j=0;j<adj[i].size();j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
}