#include<bits/stdc++.h>
using namespace std; 

#define ll long long int 

vector<int> repeatedRows(vector<vector<int>> &matrix, int M, int N) 
    { 
       map<vector<int>,int>mp;
       vector<int>ans;
       for(int i=0;i<M;i++){
           mp[matrix[i]]++;
           if(mp[matrix[i]]>1){
               ans.push_back(i);
           }
           
           
       }
      return ans;
    }