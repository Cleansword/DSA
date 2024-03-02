#include<bits/stdc++.h>
using namespace std;
int main(){
    unsigned int  x=0;
    x=x|(1<<4);
    x=x|(1<<2);
   
    for(int bit=0;bit<60;bit++){
        if(x & (1<<bit)) cout<<bit<<" ";
    }
}