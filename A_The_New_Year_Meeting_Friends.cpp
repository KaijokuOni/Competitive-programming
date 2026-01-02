#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a;
    for(int i=0;i<3;i++){
        int n;
        cin>>n;
        a.push_back(n);


    }
    
    vector<int> b;
    for(int i=0;i<3;i++){
        int p=0;
        p=a[i];
        int k=abs(a[0]-p)+abs(a[1]-p)+abs(a[2]-p);
        b.push_back(k);
    }
    cout<<*min_element(b.begin(),b.end())<<endl;
   




}