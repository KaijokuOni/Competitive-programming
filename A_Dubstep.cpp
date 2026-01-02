#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'){
         s.replace(i,3," ");  
      
        }
    }
    if(s[0]==' '){s.erase(0,1);}
    for(int i=0;i<s.size();i++){
        if(s[i]==' '&&s[i+1]==' '){
            s.erase(i,1);
        }
    }
cout<<s<<endl;
return 0;

}