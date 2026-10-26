#include<iostream>
using namespace std;
#include<bits/stdc++.h>
void helper(string& s,vector<vector<char>>&v){
    unordered_map<char,vector<char>>m;
    int n=s.size();
    for(int i=0;i<n;i++){
        m[s[i]].push_back(s[i]);
    }
    for(auto& x:m){
        v.push_back(x.second);
    }
}
int main(){
    string s="aabdcceelmm";
    vector<vector<char>>v;
    helper(s,v);
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}