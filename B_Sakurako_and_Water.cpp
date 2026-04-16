#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<vector<long long>> a(n, vector<long long>(n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }

        long long ans = 0;

        for (int d = -(n - 1); d <= n - 1; d++) {
            long long need = 0;
            for (int i = 0; i < n; i++) {
                int j = i - d;
                if (j < 0 || j >= n) continue;

                long long val = a[i][j] + need;
                if (val < 0) {
                    long long add = -val;
                    ans += add;
                    need += add;
                }
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
