#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        unordered_map<int, long long> brandSum;
        brandSum.reserve(k);

        for (int i = 0; i < k; i++) {
            int b, c;
            cin >> b >> c;
            brandSum[b] += c;
        }

        vector<long long> sums;
        sums.reserve(brandSum.size());
        for (auto &p : brandSum) {
            sums.push_back(p.second);
        }

        sort(sums.rbegin(), sums.rend());

        long long ans = 0;
        for (int i = 0; i < (int)sums.size() && i < n; i++) {
            ans += sums[i];
        }

        cout << ans << '\n';
    }

    return 0;
}
