#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(int n,int arr[],vector<int>&ds,int ind,int sum,int s){
    if(ind==n){
        if(s==sum)
        for(auto it : ds){
            cout<<it<<" ";
            }
             cout<<endl;
            return;
           
        }
        s+=arr[ind];
        ds.push_back(arr[ind]);
        solve(n,arr,ds,ind+1,sum,s);
        s-=arr[ind];
        ds.pop_back();
        solve(n,arr,ds,ind+1,sum,s);
    }


int main(){
    vector<int>ds;
    int n=3;
    int arr[]={3,1,2};
    int sum=2;
    int s=0;
    solve(n,arr,ds,0,sum,s);
    //cout<<"HELLO";

    return 0;

}