#include<bits/stdc++.h>
using namespace std;
int main(){
    string  n1,n2;
    string nw;
    cin>>n1>>n2;
    int size=n1.size();
    for(int i=0;i<n1.size();i++){
        if(n1[i]==n2[i])nw.push_back('0');
        else nw.push_back('1');
    }
    cout<<nw;
    return 0;
}