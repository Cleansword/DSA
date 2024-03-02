//swapping of two numbers without using using third variable
//using xor 

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"before swapping  "<<a<<" "<<b<<endl;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"after swapping  "<<a<<" "<<b<<endl;


}
