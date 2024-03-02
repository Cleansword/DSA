//clear the ith bit 
//it means if the ith bit is 1 , then convert it into 0 and if 0 ,it remain same.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cin>>n>>i;
    int mask=1<<i-1;
    n=n&(~mask);
    cout<<n;
}