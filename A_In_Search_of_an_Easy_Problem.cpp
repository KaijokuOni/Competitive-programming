#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool logic=false;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1){
        logic =true;
    break;}
        else{logic=false;}
    }
    if(!logic){cout<<"EASY";}
    else{cout<<"HARD";}
    return 0;
}