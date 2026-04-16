#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<long long> a(n + 2), b(n + 2);
        for (int i = 1; i <= n; i++) cin >> a[i];
        for (int i = 1; i <= n; i++) cin >> b[i];

        vector<long long> d(n + 2), S(n + 2), pref(n + 2);

        for (int i = 1; i <= n; i++) {
            d[i] = max(a[i], b[i]);
        }

        S[n] = d[n];
        for (int i = n - 1; i >= 1; i--) {
            S[i] = max(S[i + 1], d[i]);
        }

        for (int i = 1; i <= n; i++) {
            pref[i] = pref[i - 1] + S[i];
        }

        while (q--) {
            int l, r;
            cin >> l >> r;
            cout << pref[r] - pref[l - 1] << " ";
        }

        cout << "\n";
    }

    return 0;
}
