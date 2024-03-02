#include<bits/stdc++.h>
using namespace std;
int overlapSubarraySum(vector<int>&nums,int firstlen){
    int i=0,j=0;
    int sum=0;
    int maxsum=0;
    unordered_map<int,int>mp;
    while(j<nums.size()){
        sum+=nums[j];
        mp[nums[j]]++;
        if(firstlen<j-i+1){
            j++;
        }
        else if(firstlen==j-i+1){
            mp[nums[i]]--;
            if(mp[nums[i]]==0) mp.erase(mp[nums[i]]);

            maxsum=max(maxsum,sum);
            sum-=nums[i];
            i++;
            j++;
        }
    }
        // vector<int>v;
        // for(int i=0;i<nums.size();i++){
        //     if(mp.find(nums[i])!=mp.end()) v.push_back(nums[i]);
        // }

        // i=0,j=0;
        // sum=0;
        // int maxsum2=0;
        // while(j<v.size()){
        //     sum+=v[j];
        //     if(secondlen<j-i+1) j++;
        //     else if(secondlen==j-i+1){
        //         maxsum2=max(maxsum2,sum);
        //         sum-=nums[i];
        //         i++;
        //         j++;
        //     }
        // }
        // return maxsum+maxsum2;
        return maxsum;
    }
int main(){
    vector<int>nums={0,6,5,2,2,5,1,9,4};
    int firstlen=2,secondlen=3;
    int a=overlapSubarraySum(nums,firstlen);
    cout<<a<<endl;
    cout<<"sagar";
}
