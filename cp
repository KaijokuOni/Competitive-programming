#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int main(){
    string a,b;
    cin>>a>>b;
    int n=a.size()/size[0];

    int m=b.size()/size[0];
    for(int i=0;i<n;i++){
        if(a[i]=isupper(a[i])){
            a[i]=tolower(a[i]);
        }
    }
    for(int j=0; j<m; j++){
        if(b[j]=isupper(b[j])){
            b[j]=tolower(b[j]);
        }
    }
    if(a==b){
        cout<<0<<endl;
    }
    else if(a<b){
        cout<<-1<<endl;
    }
    else{
        cout<<1<<\n;
    }}
