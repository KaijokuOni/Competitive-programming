#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;

    int size=s.size();
    switch(size){
        case 1:
        if(isupper(s[0]))
      cout<<(char)tolower(s[0]);
      else if(islower(s[0])){
      cout<<(char)toupper(s[0]);}
      break;


     default:{
            bool allupper=true;
    for(int i=0;i<size;i++){
        if(!isupper(s[i]))
        allupper=false;
    }
    if(allupper){
        string n="";
        for(int i=0;i<size;i++){
        n.push_back(tolower(s[i]));}
           cout<<n;
          break;
    }
    else if(!allupper){
    if(islower(s[0])){
          
    bool upper=true;
    for(int i=1;i<size;i++){
        if(!isupper(s[i]))
        upper=false;
    }
    if(upper){

    string n="";
    for(int j=0;j<size;j++){
            if(j==0){
                n.push_back(toupper(s[j]));
            }
            else{n.push_back(tolower(s[j]));}
        }
          cout<<n;
          break;
    }
    }

    }
    }
 
    cout<<s;
break;}
}
