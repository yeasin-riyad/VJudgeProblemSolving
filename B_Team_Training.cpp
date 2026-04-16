#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long x;
        cin >> n >> x;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end(), greater<long long>());

        long long cnt = 0;
        int team = 0;

        for (int i = 0; i < n; i++) {
            cnt++;
            if (cnt * a[i] >= x) {
                team++;
                cnt = 0;
            }
        }

        cout << team << "\n";
    }

    return 0;
}
