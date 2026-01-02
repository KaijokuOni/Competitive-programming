

#include<bits/stdc++.h>
using namespace std;

int main(){
    string a,b;
    cin>>a>>b;
    int n=a.size();
    int m=b.size();
    for(int i=0;i<n;i++){
        if(isupper(a[i])){
            a[i]=tolower(a[i]);
        }
    }
    for(int j=0; j<m; j++){
        if(isupper(b[j])){
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
        cout<<1<<endl;
    } 
    return 0;
}