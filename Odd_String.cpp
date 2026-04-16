#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >>n;
        string S;
        cin >> S;
        vector<int> cnt(26, 0);
        for (char c : S) cnt[c - 'a']++;
        bool ok = true;
        int need = 0;
        for (int x : cnt) {
            if (x >= 3) {
                ok = false;
                break;
            }
            if (x == 2) need++;
        }
        int even = (n+1)/2;
        int odd = n/2;
        if (need > min(even, odd)) ok = false;
        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}
