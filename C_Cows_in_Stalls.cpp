#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    long long l = 0, r = a[n - 1] - a[0];

    auto can = [&](long long d) {
        int cnt = 1;
        long long last = a[0];
        for (int i = 1; i < n; i++) {
            if (a[i] - last >= d) {
                cnt++;
                last = a[i];
                if (cnt >= k) return true;
            }
        }
        return false;
    };

    while (l < r) {
        long long mid = (l + r + 1) / 2;
        if (can(mid)) l = mid;
        else r = mid - 1;
    }

    cout << l << "\n";
    return 0;
}
