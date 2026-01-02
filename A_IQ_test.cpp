#include<bits/stdc++.h>
using namespace std;
int main(){
    int count1=0,count2=0;
    int n,b,evenindex,oddindex;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++){
        cin>>b;
        if(b%2==0){
            count1++;
            evenindex=i+1;
        }
        else if(b==1){count2++;
        oddindex=i+1;}
        else{count2++;
            oddindex=i+1;
        }


    }
    if(count1==1){
        cout<<evenindex;}
    else{cout<<oddindex;}
    return 0;
}