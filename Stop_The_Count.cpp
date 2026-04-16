#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ones = 0, ans = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') ones++;
            int counted = i + 1;
            int zeros = counted - ones;
            if (ones > zeros) ans++;
        }
        cout << ans << "\n";
    }
    return 0;
}
