#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;              
    cin >> t;

    for (int i = 0; i < t; i++){
        int n;          
        cin >> n;
        vector<int> a(n);
        for (int j = 0; j < n; j++) cin >> a[j];

      
        for (int l = 0; l < 101; l++) {      
            bool present = false;
            for (int x : a) {
                if (x == l) {
                    present = true;
                    break;  
                }
            }
            if (!present) {     
                cout << l << '\n';
                break;           
            }
        }
    }

    ;
}
