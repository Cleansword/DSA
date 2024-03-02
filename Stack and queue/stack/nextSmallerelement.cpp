#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={1,4,6,1,2,4,3};
    int n=arr.size();
    stack<int>s;
    vector<int>ans(n,-1);
    for(int i=n-1;i>=0;i--){
        while(!s.empty() && arr[s.top()]>=arr[i]) s.pop();
        if(s.size()>0) ans[i]=arr[s.top()];
        s.push(i);
    }
    for(auto i: ans){
        cout<<i<<" ";
    }
}