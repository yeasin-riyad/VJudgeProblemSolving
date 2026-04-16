#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, n;
    cin >> k >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    long long l = 0, r = 0;
    for (auto x : a) r += x;
    r /= k;

    while (l < r) {
        long long mid = (l + r + 1) / 2;
        long long sum = 0;
        for (auto x : a) {
            sum += min(x, mid);
        }
        if (sum >= mid * k) l = mid;
        else r = mid - 1;
    }

    cout << l << "\n";
    return 0;
}
