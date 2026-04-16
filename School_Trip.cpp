#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, x, k;
    cin >> n >> x >> k;
    int min_changes = 1e9; 
    for (int m = 0; m <= n; m += k) {
        int current_changes = abs(x - m);
        if (current_changes < min_changes) {
            min_changes = current_changes;
        }
    }
    
    cout << min_changes << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}