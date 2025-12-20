#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n, x, y;
        cin >> n >> x >> y;

        vector<long long> a(n);
        long long totalSum = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            totalSum += a[i];
        }

        sort(a.begin(), a.end());

        long long ans = 0;

        for (int i = 0; i < n; i++) {
            long long L = totalSum - y - a[i];
            long long R = totalSum - x - a[i];

            auto leftPos = lower_bound(a.begin() + i + 1, a.end(), L);
            auto rightPos = upper_bound(a.begin() + i + 1, a.end(), R);

            ans += (rightPos - leftPos);
        }

        cout << ans << "\n";
    }

    return 0;
}
