#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        string s;
        cin >> s;

        long long base = 0;
        vector<long long> gains;

        for (long long i = 0; i < n; i++) {
            if (s[i] == 'L') {
                base += i;
                long long gain = (n - i - 1) - i;
                if (gain > 0) gains.push_back(gain);
            } else {
                base += (n - i - 1);
                long long gain = i - (n - i - 1);
                if (gain > 0) gains.push_back(gain);
            }
        }

        sort(gains.rbegin(), gains.rend());

        vector<long long> ans(n);
        long long current = base;
        for (long long k = 0; k < n; k++) {
            if (k < gains.size()) current += gains[k];
            ans[k] = current;
        }

        for (auto v : ans) cout << v << " ";
        cout << "\n";
    }
    return 0;
}
