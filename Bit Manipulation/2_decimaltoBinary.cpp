//conversion of decimal to binary number;

#include<bits/stdc++.h>
using namespace std;
vector<int>solve(int n){
    vector<int>sol;
    while(n){
        int a=n%2;
        sol.push_back(a);
        n/=2;

    }
    return sol;
}
int main(){
    int n;
    cin>>n;
    vector<int>ans;
    ans=solve(n);
    reverse(ans.begin(),ans.end());
    for(auto i: ans){
        cout<<i<<" ";
    }
}