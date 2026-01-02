#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int  x=0;   
    double y;
    cin>>n;
    int a[n];
   for(int i=0;i<n;i++){
        cin>>a[i];
        x += a[i];
   } 
   y=double(x)/n;
    cout << fixed << setprecision(12) << y << endl;
    return 0;
}