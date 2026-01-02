#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin >> a>>b>>c;
    int k,l,m;
    k=(c*(c+1))/2;
    l = k*a;
    if(b<l)
{m=l-b;
cout<<m;
}
else
{cout<<0;
}
return 0;
}