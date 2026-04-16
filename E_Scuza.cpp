#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<long long> prefSum(n), prefMax(n);
        prefSum[0] = a[0];
        prefMax[0] = a[0];

        for (int i = 1; i < n; i++) {
            prefSum[i] = prefSum[i - 1] + a[i];
            prefMax[i] = max(prefMax[i - 1], a[i]);
        }

        while (q--) {
            long long k;
            cin >> k;

            int idx = upper_bound(prefMax.begin(), prefMax.end(), k) - prefMax.begin();

            if (idx == 0)
                cout << 0 << " ";
            else
                cout << prefSum[idx - 1] << " ";
        }
        cout << '\n';
    }

    return 0;
}
