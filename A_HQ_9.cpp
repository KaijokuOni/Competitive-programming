#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin>>a;
    bool logic=false;
    for(char ch:a){
        if(ch=='H'||ch=='Q'||ch=='9'){
        logic=true;
        break;}
    }
    if(logic){cout<<"YES";}
    if(!logic){cout<<"NO";}
    return 0;
}