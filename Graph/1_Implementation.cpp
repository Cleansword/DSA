//implementation of graph using adjacency matrix

#include<bits/stdc++.h>
using namespace std;
int main(){

    //it is for undirected graph
    int n,m;
    cout<<"Enter number of nodes and edges"<<endl;
    cin>>n>>m;
    int adj[n+1][n+1]={0};
    cout<<"enter u and v"<<endl;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1; // it will be remove in the case of directed grpah
    }

    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
}