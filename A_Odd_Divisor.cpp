#include<bits/stdc++.h>
using namespace std;
int main(){
    int m;
    cin>>m;
    while(m--){
        long long n;
        cin>>n;
        if(n>1 && ((n & (n-1))==0)){
            cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;
    }

}