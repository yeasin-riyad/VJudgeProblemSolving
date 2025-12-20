#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b) {
    while (b) {
        long long t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        long long g = a[0];
        for (int i = 1; i < n; i++) {
            g = gcd(g, a[i]);
        }

        if (g == 1) {
            cout << 2 << "\n";
            continue;
        }
        long long x = 2;
        while (gcd(x, g) != 1) {
            x++;
        }
        cout << x << "\n";
    }

    return 0;
}
