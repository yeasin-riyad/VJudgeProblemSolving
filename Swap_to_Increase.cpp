#include<bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    vector<int> pos(n + 1);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
        pos[p[i]] = i; 
    }
    long long max_coins = 0;
    for (int l = 1; l <= n; l++) {
        int inversions = 0;
        for (int r = l; r <= n; r++) {
            for (int i = l; i < r; i++) {
                if (pos[i] > pos[r]) {
                    inversions++;
                }
            }
            
            int length = r - l + 1;
            long long current_coins = (long long)length - inversions;
            max_coins = max(max_coins, current_coins);
        }
    }

    cout << max_coins << endl;
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