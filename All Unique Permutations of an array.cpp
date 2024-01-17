#include<bits/stdc++.h>
using namespace std; 

#define ll long long int 

void solve(vector<int>temp,vector<vector<int>>&ans,vector<int> &arr,int index,set<vector<int>>&st){
       if(index==arr.size()){
        st.insert(temp);
           return ;
       }
       
       for(int i=index;i<arr.size();i++){
           
           swap(temp[index],temp[i]);
           solve(temp,ans,arr,index+1,st);
           swap(temp[index],temp[i]);
           
       }
       
   } 
  public:
    vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
        vector<int>temp=arr;
        set<vector<int>>st;
        
        vector<vector<int>>ans;
        solve(temp,ans,arr,0,st);
       
        for(auto i:st){
            ans.push_back(i);
        }
        return ans;
        
    }