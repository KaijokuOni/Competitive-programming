#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string a;
        cin>>a;
        int size=a.size();
        int count=0;
        for(int j=0;j<size;j++){
            if(a[j]!='0'){
                count++;
            }
        }
        cout<<count<<endl;
        for(int k=0;k<size;k++){
            if(a[k]!='0'){
                int num=a[k]-'0';
                cout<<(num*pow(10,(size-k-1)))<<" ";
            }
        }
        cout<<endl;

    }
}