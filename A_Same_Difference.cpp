#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        char last = s[n-1];
        int ops = 0;

        for (int i = 0; i < n-1; i++) {
            if (s[i] != last) ops++;
        }

        cout << ops << "\n";
    }
}
