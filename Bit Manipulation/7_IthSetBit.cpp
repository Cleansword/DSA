//check the ith bit is set or not
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ,i;
    cin>>n>>i;
    int mask=1<<i-1;
    bool ans=n&mask;
    cout<<ans;

    
}