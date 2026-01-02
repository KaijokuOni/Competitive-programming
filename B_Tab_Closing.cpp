#include <bits/stdc++.h>
using namespace std;

long long solve(long long a, long long b, long long n) {
    if (n == 0) return 0;
    long long moves = 0;
    long long cursor = 0;
    long long m = n;
    while (m > 0) {
        long long len_val = min(b, a / m);
        if (cursor != len_val) {
            moves++;
            cursor = len_val;
        }
        if (len_val == b) {
            return moves;
        }
        // Find the largest m' <= m where a / m' == len_val
        long long low = 1;
        long long high = m;
        while (low < high) {
            long long mid = (low + high + 1) / 2;
            if (a / mid == len_val) {
                low = mid;
            } else {
                high = mid - 1;
            }
        }
        long long max_m_in_group = low;
        // Close all from m down to max_m_in_group + 1
        long long num_close = m - max_m_in_group;
        m -= num_close;
    }
    return moves;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        long long a, b, n;
        cin >> a >> b >> n;
        cout << solve(a, b, n) << '\n';
    }
    
    return 0;
}