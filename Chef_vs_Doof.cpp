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
        bool allOdd = true;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x % 2 == 0) allOdd = false;
        }

        cout << (allOdd ? "YES" : "NO") << "\n";
    }
    return 0;
}
