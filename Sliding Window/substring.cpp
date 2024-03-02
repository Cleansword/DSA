#include<bits/stdc++.h>
using namespace std;
   int numberOfSubstrings(string s) {
        unordered_map<char,int>mp;
        int count=0;
        int i=0,j=0;
        while(j<s.length()){
            mp[s[j]]++;
           while(mp['a']>=1 && mp['b']>=1 && mp['c']>=1){
               count+=(s.length()-j);
               mp[s[i]]--;
               i++;
           }
           j++;
            
        }
        return count;
     
    }
int main(){
    string s="abcabc";
    int a=numberOfSubstrings(s);
    cout<<a<<endl;
}