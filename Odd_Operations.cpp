#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        if (n % 2 != 0) {
            cout << 0 << "\n";
            continue;
        }
        string s = to_string(n);
        bool o = false;
        for (char c : s) {
            if ((c - '0') % 2 != 0) {
                o = true;
                break;
            }
        }

        if (o) {
            cout << 1 << "\n";
        } else {
            if (n < 10) {
                cout << -1 << "\n";
            } else {
                int l = n % 10;
                bool ok = false;
                for (char c : s) {
                    if ((c - '0') > l) {
                        ok = true;
                        break;
                    }
                }
                if (ok) cout << 2 << "\n";
                else cout << 3 << "\n";
            }
        }
    }
    return 0;
}