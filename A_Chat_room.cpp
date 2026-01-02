#include<bits/stdc++.h>
using  namespace std;
int main(){
    string s,t="hello";
    cin>>s;
    int index=0;
    bool g=false;
    for(int i=0;i<s.size();i++){
        if(s[i]==t[index]){
            index++;
            if(index==t.size()){
                g=true;
                break;
            }
        }
    }
    if(!g){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
return 0;

}