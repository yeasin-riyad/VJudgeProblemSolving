#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        vector<long long> a(k);
        for (int i = 0; i < k; i++) cin >> a[i];

        sort(a.begin(), a.end(), greater<long long>());

        long long sum = 0, ans = 0;
        for (long long pos : a) {
            if (pos > sum) {
                ans++;
                sum += n - pos;
            } else break;
        }

        cout << ans << "\n";
    }

    return 0;
}
