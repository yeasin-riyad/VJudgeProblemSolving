#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k;
    cin >> n >> m >> k;

    vector<long long> a(n + 1);
    for (int i = 1; i <= n; i++) cin >> a[i];

    vector<int> l(m + 1), r(m + 1);
    vector<long long> d(m + 1);
    for (int i = 1; i <= m; i++) {
        cin >> l[i] >> r[i] >> d[i];
    }

    vector<long long> opCount(m + 2, 0);
    for (int i = 1; i <= k; i++) {
        int x, y;
        cin >> x >> y;
        opCount[x] += 1;
        opCount[y + 1] -= 1;
    }

    for (int i = 1; i <= m; i++) {
        opCount[i] += opCount[i - 1];
    }

    vector<long long> diff(n + 2, 0);

    for (int i = 1; i <= m; i++) {
        long long totalAdd = opCount[i] * d[i];
        diff[l[i]] += totalAdd;
        diff[r[i] + 1] -= totalAdd;
    }

    for (int i = 1; i <= n; i++) {
        diff[i] += diff[i - 1];
        a[i] += diff[i];
    }

    for (int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
    cout << "\n";

    return 0;
}
