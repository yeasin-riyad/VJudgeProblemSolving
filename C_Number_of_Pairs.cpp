#include <bits/stdc++.h>
using namespace std;

long long count_le(vector<long long> &a, long long x) {
    long long cnt = 0;
    int n = a.size();
    int l = 0, r = n - 1;
    while (l < r) {
            if (a[l] + a[r] <= x) {
                cnt += (r - l);
                l++;
            } else {
                r--;
            }
    }
    return cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long l, r;
        cin >> n >> l >> r;

        vector<long long> a(n);
        for (auto &x : a) cin >> x;

        sort(a.begin(), a.end());

        long long ans = count_le(a, r) - count_le(a, l - 1);
        cout << ans << '\n';
    }
    return 0;
}
