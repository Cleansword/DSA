//set the ith bit from right side
//it always iterate from right to left

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cin>>n>>i;
    int mask=1<<i-1;
    n=n|mask;
    cout<<n;
}