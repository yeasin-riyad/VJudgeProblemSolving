#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // More efficient: GCD of differences between consecutive sorted elements
    sort(a.begin(), a.end());
    long long g = 0;
    for (int i = 1; i < n; i++) {
        g = __gcd(g, a[i] - a[i - 1]);
    }

    if (g == 0) {
        g = 1;
    }

    long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += (g - a[i] % g) % g;
    }

    cout << sum << " " << g << "\n";
    return 0;
}