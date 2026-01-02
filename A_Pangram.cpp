#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    set<char> a;
    cin>>s;
    string s2;
    for(char c:s) s2+=(tolower(c));
    for(int i=0;i<n;i++){
        a.insert(s2[i]);

    }
    int size=a.size();
    if(size==26) cout<<"YES";
    else cout<<"NO";
}