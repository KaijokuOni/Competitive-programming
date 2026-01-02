#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,count=0;
    vector<int> a;
    cin>>n;
    int b;
    for(int i=0;i<n;i++){
        cin>>b;
        a.push_back(b);

    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]==4){count++;
             a.erase(a.begin()+i);
            }
             
            else if((a[i]==3&&a[j]==1)||(a[i]==1&&a[j]==3)){
                count++;
                a.erase(a.begin()+j);
                a.erase(a.begin()+i);
            }
            else if((a[i]==2&&a[j]==1)||(a[i]==1&&a[j]==2)||(a[i]==2&&a[j]==2)){
                a.erase(a.begin()+i);
                a.erase(a.begin()+j);
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}