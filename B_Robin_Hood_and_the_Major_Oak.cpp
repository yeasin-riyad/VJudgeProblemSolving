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

        long long L = max(1LL, n - k + 1);
        long long R = n;

        long long total = R - L + 1;
        long long odds = (R + 1) / 2 - L / 2;

        if (odds % 2 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
