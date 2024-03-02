#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={11,8,6,2,7,4,9};
    stack<int>s;
    int n=arr.size();
    vector<int>ans(n,-1);
    for(int i=0;i<n;i++){
        while(!s.empty() && arr[s.top()]<arr[i]) s.pop();
        if(s.size()>0) ans[i]=arr[s.top()];
        s.push(i);
    }
    for(auto i:ans){
        cout<<i<<" ";
    }
}