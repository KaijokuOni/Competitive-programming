#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    int i;
    int k=0;
    cin>>i>>a;
    for(int j=0;j<i;j++)
    {
        if(a[j]==a[j+1])
        {
            k++;
    }
}
cout<<k;
return 0;
}