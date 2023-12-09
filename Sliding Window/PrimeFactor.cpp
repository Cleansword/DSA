#include<bits/stdc++.h>
using namespace std;
int  primeFactors(int n)  
{  
    int sum=0;
    while (n % 2 == 0)  
    {  
        sum+=2;  
        n = n/2;  
    }  
    for (int i = 3; i <= sqrt(n); i = i + 2)  
    {   
        while (n % i == 0)  
        {  
            sum+=i;
            n = n/i;  
        }  
    }  
    if (n > 2)  sum+=n;
    
    return sum;
} 

int digsum(int n){
    int sum=0;
    while(n){
        sum+=(n%10);
        n/=10;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    
    int a=primeFactors(n);
    int b=digsum(n);
    if(a==b) cout<<1<<endl;
    else cout<<0<<endl;
    


    

}