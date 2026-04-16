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

        vector<int> p(n + 1);
        vector<int> bad;

        for (int i = 1; i <= n; i++) {
            cin >> p[i];
            if (((p[i] - i) % k + k) % k != 0)
                bad.push_back(i);
        }

        if (bad.empty()) {
            cout << 0 << '\n';         
        }
        else if (bad.size() == 2) {
            cout << 1 << '\n';          
        }
        else {
            cout << -1 << '\n';      
        }
    }

    return 0;
}
