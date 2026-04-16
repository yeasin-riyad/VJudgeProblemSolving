#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> p(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> p[i];
        }

        int l = -1, r = -1;

        for (int i = 1; i <= n; i++) {
            int want = n - i + 1;
            if (p[i] != want) {
                l = i;
                for (int j = i + 1; j <= n; j++) {
                    if (p[j] == want) {
                        r = j;
                        break;
                    }
                }
                break;
            }
        }

        if (l != -1 && r != -1) {
            reverse(p.begin() + l, p.begin() + r + 1);
        }

        for (int i = 1; i <= n; i++) {
            cout << p[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
