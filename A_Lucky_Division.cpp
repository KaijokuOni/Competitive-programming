#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    vector<int> a;
    cin>>n;

    for(int i=0;i<1000;i++){
        string t=to_string(i);
        bool lucky = true;
        for(char c:t){
            if(c!='4' && c!='7'){
                lucky = false;
                break;
            }
        }
        if(lucky && i != 0){
            a.push_back(i);
        }
    }

    // Print all lucky numbers found
    //cout << "Lucky numbers up to 999:" << endl;
   // for (int i = 0; i < a.size(); i++) {
   //     cout << a[i] << " ";
    //}
   // cout << endl;

    bool logic=false;
    for(int i=0;i<a.size();i++)
        if(n%a[i]==0){
            logic = true;
        }
    
    if(logic){cout<<"YES";}
    else{
        cout<<"NO";
    }
    
    
    
    return 0;

}