#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // If only one element, answer is that element
        if (n == 1) {
            cout << a[0] << "\n";
            continue;
        }

        // Sort the array
        sort(a.begin(), a.end());

       
        long long cur = a[0];
        for (int i = 1; i < n; i++) {
            cur = cur + a[i] - 1;
        }

        cout << cur << "\n";
    }
    return 0;
}
