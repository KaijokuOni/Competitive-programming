#include<bits/stdc++.h>
using namespace std;
int main(){
    int s,n;
    cin>>s>>n;
    int a[n][2];
    for(int i=0;i<n;i++){
        cin>>a[i][0]>>a[i][1];
    }
    bool pass=false;
    for(int i=0;i<n;i++){
        if(s>a[i][0]){
            s+=a[i][1];
            pass=true;
        }
    }
    if(pass){
        cout<<"YES";
    }
    else if(!pass){
        cout<<"NO";
    }}