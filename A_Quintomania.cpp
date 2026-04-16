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

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        bool perfect = true;
        for (int i = 1; i < n; i++) {
            int diff = abs(a[i] - a[i - 1]);
            if (diff != 5 && diff != 7) {
                perfect = false;
                break;
            }
        }

        cout << (perfect ? "YES\n" : "NO\n");
    }

    return 0;
}
