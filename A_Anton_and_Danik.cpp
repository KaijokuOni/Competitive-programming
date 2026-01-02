#include<bits/stdc++.h>
using namespace std;
int main(){
    int anton=0,danik=0,games;
    string a;
    cin>>games>>a;
    for(int i=0;i<games;i++){
        if(a[i]=='A')
        {anton++;
    }
    else{
        danik++;
    }
    }
    if(anton>danik){
        cout<<"Anton";
    }
    else if(danik>anton){
        cout<<"Danik";
    }
    else{
        cout<<"Friendship";
    }
    return 0;
}