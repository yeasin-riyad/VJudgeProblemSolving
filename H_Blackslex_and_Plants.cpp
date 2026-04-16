#include <bits/stdc++.h>
using namespace std;

// Compute f(x) = x * least significant set bit of x
long long f(long long x) {
    return x * (x & -x);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<long long> diff(n + 3, 0);   // difference array
        vector<long long> fx(n + 2, 0);     // f(x)
        for (int i = 1; i <= n; i++) fx[i] = f(i);

        while (q--) {
            int l, r;
            cin >> l >> r;
            int len = r - l + 1;

            // Apply the difference array trick for linear slope
            diff[l] += fx[1];                 // start of addition
            if (len > 1) diff[l+1] += fx[2] - fx[1];  // slope
            diff[r+1] -= fx[len];             // end of slope
        }

        vector<long long> water(n+1, 0);
        // accumulate difference array to get final water
        for (int i = 1; i <= n; i++) {
            diff[i] += diff[i-1];
            water[i] = diff[i];
        }

        for (int i = 1; i <= n; i++) {
            cout << water[i] << (i < n ? ' ' : '\n');
        }
    }

    return 0;
}
