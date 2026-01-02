#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    string e="";
    int c,d;
    cin>>a>>b;
    c=a.size();
    for(int i=c-1;i>=0;i--){
        e += a[i];    }
    if(e==b){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}