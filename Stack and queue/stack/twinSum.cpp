#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={5,4,2,1};
    int n=arr.size();
    deque<int>dq;
    for(auto i:arr) dq.push_back(i);
    int sum=0;
    int maxsum=INT_MIN;
    while(!dq.empty()){
        sum=dq.front()+dq.back();
        maxsum=max(maxsum,sum);
        dq.pop_front();
        dq.pop_back();
    }
    cout<<maxsum<<endl;
}