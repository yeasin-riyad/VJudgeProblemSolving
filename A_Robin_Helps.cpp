#include<bits/stdc++.h>
using namespace std;

void solve() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
    
    int n, k;
    cin >> n >> k;
    
    int robin_gold = 0;
    int give_count = 0;
    
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        
        if (a >= k) {
            robin_gold += a;
        } else if (a == 0) {
            if (robin_gold > 0) {
                robin_gold--;
                give_count++;
            }
        }
    }
    
    cout << give_count << endl;
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