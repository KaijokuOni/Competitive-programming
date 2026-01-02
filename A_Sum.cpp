#include<bits/stdc++.h>
using namespace std;
int main(){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
                int a,b,c;
                cin>>a>>b>>c;
                int d=a+b,e=b+c,f=a+c;
                if(d==c||e==a||f==b){
                    cout<<"YES"<<endl;
                }else cout<<"NO"<<endl;


        }
return 0;



}