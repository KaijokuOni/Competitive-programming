#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin>>a;
    bool found=false;
    int count=0,cunt=0;
    for(int i=0;i<a.size();i++){
        if(a[i]=='0'){
            count++;
            cunt=0;
            if(count==7){
                cout<<"YES";
                found=true;
                break;
            }
        }
        else if(a[i]=='1'){
    count=0;
           cunt++;
            if(cunt==7){
                cout<<"YES";
                found=true;
                break;
            }
        }
    }
    if(!found){
        cout<<"NO";
    }
    return 0;}
