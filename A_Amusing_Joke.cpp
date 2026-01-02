#include<bits/stdc++.h>
using namespace std;
int main(){
    int count=0;
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    string s4=s1+s2;
    int size=s4.size();
    if(size!=s3.size()){cout<<"NO";}
    else{
    for(int i=0;i<s3.size();i++){   
       
        if(s4.size()==0){break;
        }
        else{
    for(int j=0;j<s4.size();j++){
        if(s3[i]==s4[j]){
            count++;
        s4.erase(j,1);
        break;
    }
       
            
    } }}
    if(count==size){cout<<"YES";}
else{cout<<"NO";}}
return 0;
}  