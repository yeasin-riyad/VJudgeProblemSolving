#include <bits/stdc++.h>
using namespace std;

long long m, n;
vector<long long> t, z, y;

long long balloons(long long time) {
    long long total = 0;
    for (int i = 0; i < n; i++) {
        long long cycle = t[i] * z[i] + y[i];
        long long full = time / cycle;
        long long rem = time % cycle;
        long long cur = full * z[i] + min(z[i], rem / t[i]);
        total += cur;
        if (total >= m) return m;
    }
    return total;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> m >> n;
    t.resize(n);
    z.resize(n);
    y.resize(n);

    for (int i = 0; i < n; i++) {
        cin >> t[i] >> z[i] >> y[i];
    }

    long long l = 0, r = 1;
    while (balloons(r) < m) r *= 2;

    while (l < r) {
        long long mid = (l + r) / 2;
        if (balloons(mid) >= m) r = mid;
        else l = mid + 1;
    }

    long long time = l;
    cout << time << "\n";

    vector<long long> res(n, 0);
    long long need = m;

    for (int i = 0; i < n; i++) {
        long long cycle = t[i] * z[i] + y[i];
        long long full = time / cycle;
        long long rem = time % cycle;
        long long cur = full * z[i] + min(z[i], rem / t[i]);
        cur = min(cur, need);
        res[i] = cur;
        need -= cur;
    }

    for (int i = 0; i < n; i++) {
        cout << res[i] << (i + 1 < n ? ' ' : '\n');
    }

    return 0;
}
