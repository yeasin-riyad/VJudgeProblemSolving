#include<bits/stdc++.h>
using namespace std;
void solve() {
    int x, y, z;
    cin>>x>>y>>z; 
    int pairs_1_3 = min(x, z);
    int pairs_2_2 = y / 2;
    cout << pairs_1_3 + pairs_2_2 << "\n";
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