#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        int n = s.size();
        int count = 0;

        for (char c : s) {
            if (c != '0' && c != '1') count++;
        }

        if (count == 0) {
            cout << n - 1 << "\n";
        } else {
            cout << count - 1 << "\n";
        }
    }

    return 0;
}
