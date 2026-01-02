#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n1="I hate ";
    string n2="I love ";
    string n3="it";
    string n4="that";
    string newstring;
    int n;
    cin>>n;
    if(n==1)
        cout<<"I hate it";
    else
    {
        for(int i=1;i<=n;i++){
            if(i%2!=0 && i!=n) newstring += n1 + n4 + " ";
            else if(i%2==0 && i!=n) newstring += n2 + n4 + " ";
            else if(i%2!=0 && i==n) newstring += n1 + n3;
            else newstring += n2 + n3;
        }
        cout << newstring;
    }
    return 0;
}