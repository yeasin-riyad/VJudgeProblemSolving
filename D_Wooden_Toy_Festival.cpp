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
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());

        long long ans = LLONG_MAX;
        for (int i = 0; i <= n - 3; i++) {
            long long left = a[i];
            long long mid = a[i + 1];
            long long right = a[i + 2];
            long long max_wait = max({mid - left, right - mid, 0LL});
            ans = min(ans, max_wait);
        }
        if (n <= 3) ans = 0;
        cout << ans << "\n";
    }

    return 0;
}
