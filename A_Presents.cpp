#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=(a[i]-1);
    }
    int index[n];
    for(int j=0;j<n;j++){
        for(int k=0;k<n;k++){
        if(b[k]==j){
        index[j]=k+1;
        break;}
        }}
    
   for(int i=0;i<n;i++){
    cout<<index[i]<<" ";
   } 
}