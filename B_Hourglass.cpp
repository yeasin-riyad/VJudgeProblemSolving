#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        long long s, k, m;
        cin >> s >> k >> m;

        long long flips = m / k;
        long long top;
        if (s < k) top = s;
        else top = (flips % 2 == 0) ? s : k;

        long long passed = m % k;
        long long remaining = max(0LL, top - passed);

        cout << remaining << "\n";
    }
    return 0;
}
