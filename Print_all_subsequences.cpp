#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(int n,int arr[],vector<int>&ds,int ind){
    if(ind==n){
        for(auto it : ds){
            cout<<it<<" ";
            }
             cout<<endl;
            return;
           
        }
        ds.push_back(arr[ind]);
        solve(n,arr,ds,ind+1);
        ds.pop_back();
        solve(n,arr,ds,ind+1);
    }


int main(){
    vector<int>ds;
    int n=3;
    int arr[]={3,1,2};
    solve(n,arr,ds,0);
    //cout<<"HELLO";

    return 0;

}