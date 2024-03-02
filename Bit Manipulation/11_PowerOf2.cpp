//check if the given number is of power of two or not
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n && !(n & (n-1))) cout<<"yes it is power of two";
    else cout<<"No";
}
