#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0;
    cin>>n;
    int count=0;    
   
    for(int i=1;i<=n;i++){
    int x;
    cin>>x;
    sum+=x;
   
}
for(int i=1;i<=5;i++){
    if((sum+i)%(n+1)!=1){
        count++;
    }
}
cout<<count<<endl;
}