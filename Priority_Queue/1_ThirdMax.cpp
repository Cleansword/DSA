#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums={1,4,2,3,2};
    priority_queue<int,vector<int>,greater<int>>pq;
    unordered_set<int>s;
    
    for(auto i:nums) s.insert(i);
    unordered_set<int>::iterator i;
  for(i=s.begin();i!=s.end();i++){
    pq.push(*i);
    if(pq.size()>3) pq.pop();
  }
  cout<<pq.top();
   

}