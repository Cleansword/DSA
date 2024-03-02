//xor between 1 to n


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     if(n%4==0) cout<<n<<endl;
//     if(n%4==1) cout<<1<<endl;
//     if(n%4==2) cout<<n+1<<endl;
//     if(n%4==3) cout<<0<<endl;
// }

//xor between givenn ranges

#include<bits/stdc++.h>
using namespace std;
int solve(int n){
     if(n%4==0) return n;
    if(n%4==1) return 1;
    if(n%4==2) return n+1;
    if(n%4==3) return 0;
}
int main(){
    int l,r;
    cin>>l>>r;
    int a=solve(l-1);
    int b=solve(r);
    cout<<(a^b)<<endl;

}


