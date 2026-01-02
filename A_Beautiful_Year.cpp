#include<bits/stdc++.h>
using namespace std;
int main(){
    int y;
    int a[4];
    string s;
    cin>>y;
    for(int i=1000;i<=9000;i++){
        y++;
        s=to_string(y);
        for(int j=0;j<4;j++){

        }
        if(s[0]!=s[1]&&s[0]!=s[2]&&s[0]!=s[3]&&s[1]!=s[2]&&s[1]!=s[3]&&s[2]!=s[3]){
            cout<<y;
            break;
        }
    }
    return 0;
}