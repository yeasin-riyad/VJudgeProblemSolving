#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, x, y;
    cin >> n >> x >> y;

    if (n == 1) {
        cout << min(x, y) << "\n";
        return 0;
    }

    long long first = min(x, y);
    long long l = 0, r = first * n;

    while (l < r) {
        long long mid = (l + r) / 2;
        long long copies = mid / x + mid / y;
        if (copies >= n - 1) r = mid;
        else l = mid + 1;
    }

    cout << l + first << "\n";
    return 0;
}
