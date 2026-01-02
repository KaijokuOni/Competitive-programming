//hello
#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int n,l;
    cin>>n>>l;
    vector<int> a;
    for(int i=1;i<=n;i++){
        if(i%2!=0){a.push_back(i);}
        }
        for(int i=1;i<=n;i++){
            if(i%2==0){a.push_back(i);}
        }
    cout<<a[l-1];
    return 0;
}