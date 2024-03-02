#include<bits/stdc++.h>
using namespace std;

//using recursion


// int solve(int ind,vector<int>&nums){
//     if(ind==0) return nums[0];
//     if(ind<0) return 0;
//     int pick=nums[ind]+solve(ind-2,nums);
//     int notpick=solve(ind-1,nums);
//     return max(pick,notpick);
// }


//using recursion +memoization

int solve(int ind,vector<int>&nums,vector<int>&dp){
    if(ind==0) return nums[0];
    if(ind<0) return 0;
    if(dp[ind]!=-1) return dp[ind];
    int pick=nums[ind]+solve(ind-2,nums,dp);
    int notpick=solve(ind-1,nums,dp);
    return dp[ind]=max(pick,notpick);
}

//tabulation
int solve(vector<int>&nums){
    int n=nums.size();
    vector<int>dp(n,0);
    dp[0]=nums[0];
    for(int i=1;i<n;i++){
        int pick=nums[i];
        if(i>1) pick+=dp[i-2];
        int notpick=dp[i-1];
        dp[i]=max(pick,notpick);
    }
    return dp[n-1];
}

int main(){
    vector<int>nums={1,4,8,4};
    // int n=nums.size();
    // // vector<int>dp(n,-1);
    // // int a=solve(n-1,nums,dp);
    // // cout<<a<<endl;
    // int a=solve(nums);
    // cout<<a<<endl;



    //tabulation+space optimization

    int n=nums.size();
    int prev=nums[0];
    int prev2=0;
    for(int i=1;i<n;i++){
        int pick=nums[i];
        if(i>1) pick+=prev2;
        int notpick=prev;
        int curi=max(pick,notpick);
        prev2=prev;
        prev=curi;
    }
    cout<<prev<<endl;


}
