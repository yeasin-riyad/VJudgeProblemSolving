#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int max_val = INT_MIN;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            max_val = max(max_val, x);
        }
        cout << max_val << "\n";
    }
    return 0;
}
