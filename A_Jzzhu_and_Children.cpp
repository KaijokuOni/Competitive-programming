#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
vector<int> a(n);
unordered_map<int,int> pos;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    a[i]=x;
    pos[x]=i;}
for(int i=0;i<a.size();i++){
    if(a[i]<=m){
      a.erase(a.begin()+i); 
      pos.erase(a[i]);
    }
    else{
        int x=a[i];
        a.erase(a.begin()+i);
        a.push_back(x);
    }
}
int y=a.back();
cout<<pos[y]+1;

}