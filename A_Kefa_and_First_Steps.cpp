#include<bits/stdc++.h>
#define int double
using namespace std;
signed main(){
    int n,c;
    cin>>n;
    int sum=1;
    vector<int> a,b;
    for(int i=0;i<n;i++){
        cin>>c;
        a.push_back(c);    }
        for(int i=0;i<n-1;i++){
            if(a[i]<=a[i+1]){
                sum +=1;
                b.push_back(sum);
            }
           
            else{sum=1;
                b.push_back(sum);
            }
        }
        cout<<*max_element(b.begin(),b.end());
        return 0;
}