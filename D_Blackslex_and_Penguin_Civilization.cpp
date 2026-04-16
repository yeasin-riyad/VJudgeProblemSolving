#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int m = 1 << n;
        vector<int> p(m);
        iota(p.begin(), p.end(), 0);
        for (int b = n - 1; b >= 0; b--) {
            stable_partition(p.begin(), p.end(),
                [&](int x) {
                    return (x >> b) & 1;
                }
            );
        }
    for (int i = 0; i < m; i++) {
            cout << p[i] << (i + 1 < m ? ' ' : '\n');
        }
    }
    return 0;
}
