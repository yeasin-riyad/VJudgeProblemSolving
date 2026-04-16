#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n,m;
    cin >> n >> m;
    vector<ll> x(n), y(m);
    for (int i = 0; i < n; ++i) cin >> x[i];
    for (int i = 0; i < m; ++i) cin >> y[i];

    sort(x.begin(), x.end());
    sort(y.begin(), y.end());

    ll min_max_area = -1;

    for (int i = 1; i < n; ++i) {
        for (int j = 1; j < m; ++j) {

            ll c1_area = 0;
            if (i >= 2) c1_area = max(c1_area, (x[i - 1] - x[0]) * y[j - 1]);
            if (j >= 2) c1_area = max(c1_area, (y[j - 1] - y[0]) * x[i - 1]);

            ll c2_area = 0;
            if (n - i >= 2) c2_area = max(c2_area, (x[n - 1] - x[i]) * y[m - 1]);
            if (m - j >= 2) c2_area = max(c2_area, (y[m - 1] - y[j]) * x[n - 1]);

            ll res1 = max(c1_area, c2_area);
            if (min_max_area == -1 || res1 < min_max_area)
                min_max_area = res1;

            c1_area = 0;
            if (i >= 2) c1_area = max(c1_area, (x[i - 1] - x[0]) * y[m - 1]);
            if (m - j >= 2) c1_area = max(c1_area, (y[m - 1] - y[j]) * x[i - 1]);

            c2_area = 0;
            if (n - i >= 2) c2_area = max(c2_area, (x[n - 1] - x[i]) * y[j - 1]);
            if (j >= 2) c2_area = max(c2_area, (y[j - 1] - y[0]) * x[n - 1]);

            ll res2 = max(c1_area, c2_area);
            if (min_max_area == -1 || res2 < min_max_area)
                min_max_area = res2;
        }
    }
    cout << min_max_area << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
