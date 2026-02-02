#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
  unordered_map<int,int> pos;
  for (int i=0;i<n;i++){
        int x;
      cin>>x;
      pos[x]=i;
  }
  int m;
  cin>>m;
  vector<int> b(m);
  for (int j=0;j<m;j++){
    cin>>b[j];
  }
  long long count1=0,count2=0;
   for(int i=0;i<m;i++){
       int y=pos[b[i]];
        count1+=y+1;
        count2+=n-y;
}
cout<<count1<<" "<<count2;
return 0;
}