//remove last set bit
//it convert the last set bit into 0
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    n=n&n-1;
    cout<<n;
}