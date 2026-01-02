#include<bits/stdc++.h>
using namespace std;
int main(){
set<int> a;
for(int i=0;i<4;i++){
int c;
cin>>c;
a.insert(c);}
int size=a.size();
int count=4-size;
cout<<count;
return 0;
}
