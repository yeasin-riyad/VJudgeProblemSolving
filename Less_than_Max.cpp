#include<bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    map<int, int> dp;
    int max_len = 0;

    for (int i = 0; i < n; i++) {
        int val = a[i];
        if (val == 1) {
            dp[1]++;
        } else if (dp.count(val - 1) && dp[val - 1] > 0) {
            dp[val]++;
        }
    }

    for (auto const [key, count] : dp) {
        max_len += count;
    }

    cout << max_len << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}