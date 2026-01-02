#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin>>a;
    int j=a.size();
       // Step 1: convert to lowercase
    for (int i = 0; i < a.size(); i++) {
        a[i] = tolower(a[i]);
    }
    string b="";
    for(int i=0;i<j;i++)
    {if(a[i]!='a'&&a[i]!='i'&&a[i]!='y'
        &&a[i]!='o'&&a[i]!='e'&&a[i]!='u'){
    b += '.';
    b += a[i];
}}
    cout<<b;
    return 0;
}