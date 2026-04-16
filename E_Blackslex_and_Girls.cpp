#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long x, y;
        cin >> n >> x >> y;

        string s;
        cin >> s;

        vector<long long> p(n);
        for (int i = 0; i < n; i++) cin >> p[i];

        long long minA = 0, minB = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                minA += (p[i] + 1) / 2;
                minB += p[i] / 2;
            } else {
                minB += (p[i] + 1) / 2;
                minA += p[i] / 2;
            }
        }

        if (minA <= x && minB <= y) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
