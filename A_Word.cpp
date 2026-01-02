#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin>>a;
    int u=0;
    int l=0;
    for(char b:a){
        if(isupper(b)){
            u++;
        }
    else{l++;}
    }
    if(u>l){
        transform(a.begin(),a.end(),a.begin(), ::toupper);
    }
    else{
        
        transform(a.begin(),a.end(),a.begin(), ::tolower);
    }
    cout<<a;
    return 0;
}