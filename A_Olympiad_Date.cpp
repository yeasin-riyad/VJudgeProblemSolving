#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    string target = "01032025";
    vector<int> need(10, 0);
    for (char c : target) need[c - '0']++;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        vector<int> cnt(10, 0);
        int ans = 0;

        for (int i = 0; i < n; i++) {
            cnt[a[i]]++;
            bool ok = true;
            for (int d = 0; d < 10; d++) {
                if (cnt[d] < need[d]) {
                    ok = false;
                    break;
                }
            }
            if (ok) {
                ans = i + 1;
                break;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
