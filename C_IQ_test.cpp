#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a;
    vector<int> b,c,d;
    for(int i=0;i<n;i++){
        cin>>a;
        b.push_back(a);
    }
    for(int i=0;i<n;i++){
        if(b[i]%2!=0){c.push_back(i);}
        else if(b[i]%2==0) {d.push_back(i);}
    }
    int l=c.size();
    int m=d.size();
   if(l==1){
    
            cout<<c[0]+1;
        }
    
    else if(m==1){cout<<d[0]+1;}
    }