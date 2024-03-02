//conversion of binary into decimal number

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>bin={1,0,1,0};
    int j=0;
    int ans=0;
    for(int i=bin.size()-1;i>=0;i--){
        int a=pow(2,j);
        j++;
        ans+=(a*bin[i]);

    }
    cout<<ans;
}