#include<bits/stdc++.h>
using namespace std;
int setbit(int n){
    int cnt=0;
    while(n!=0){
        n=n&n-1;
        cnt++;

    }
    return cnt;
}
int main(){
    int a;
    cin>>a;
    cout<<setbit(a);
}