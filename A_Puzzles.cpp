 #include<bits/stdc++.h>
using namespace std;
int main(){
      int n,m;
      cin>>n>>m;
      vector<int> a,b;
      for(int i=0;i<m;i++){
        int k;
        cin>>k;
        a.push_back(k);
      }
      sort(a.begin(),a.end());
    
      for(int i=0;i+n-1<m;i++){
        int k=a[i+n-1]-a[i];
        b.push_back(k);
      }


cout<<*min_element(b.begin(),b.end());


}