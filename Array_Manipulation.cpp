#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n];
    while (m--){
        int a,b,d;
        cin>>a>>b>>d;
        arr[a]+=d;
        arr[b+1]-=d;
    }
    for(int i=0;i<n;i++){
        arr[i]+=arr[i-1];
    }
    int  mx=-1;
    for(int i=0;i<n;i++){
        if(mx<arr[i]){
            mx=arr[i];
        }
    }
    cout<<mx;
}