#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int>pq;
    vector<int>arr={1,5,8,44,77,99,134,34,32,67};
    for(int i=0;i<arr.size();i++){
        pq.push(arr[i]);
    }
    while(pq.empty()==false){
        cout<<pq.top()<<" ";
        pq.pop();
    }
}