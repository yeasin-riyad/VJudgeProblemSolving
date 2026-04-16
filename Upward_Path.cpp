#include<bits/stdc++.h>
using namespace std;
const long long INF = 1e18;
void solve() {
    int n;
    cin >> n;
    vector<long long> a(n), b(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> b[i];
    vector<long long> f(n, INF), g(n, INF);
    long long v0_min = min(a[0], b[0]);
    long long v0_max = max(a[0], b[0]);
    
    f[0] = v0_min; 
    g[0] = v0_max; 

    for (int i = 1; i < n; ++i) {
        long long v_min = min(a[i], b[i]);
        long long v_max = max(a[i], b[i]);

        if (v_min >= f[i - 1]) f[i] = v_min;
        else if (v_max >= f[i - 1]) f[i] = v_max;

        if (g[i - 1] != INF) {
            if (v_min >= g[i - 1]) g[i] = min(g[i], v_min);
            else if (v_max >= g[i - 1]) g[i] = min(g[i], v_max);
        }
        
        if (f[i - 1] != INF) {
            if (v_min >= f[i - 1]) {
                g[i] = min(g[i], v_max);
            }
            if (v_max >= f[i - 1] && v_min >= v_max) {
                g[i] = min(g[i], v_min);
            }
        }
    }

    if (g[n - 1] != INF) cout << "Yes" << endl;
    else cout << "No" << endl;
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