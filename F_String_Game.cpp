#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string t, p;
    cin >> t >> p;

    int n = t.size();
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        a[i]--; 
    }

    auto check = [&](int k) {
        vector<bool> deleted(n, false);
        for (int i = 0; i < k; i++) {
            deleted[a[i]] = true;
        }

        int j = 0; 
        for (int i = 0; i < n && j < (int)p.size(); i++) {
            if (!deleted[i] && t[i] == p[j]) {
                j++;
            }
        }
        return j == (int)p.size();
    };

    // Binary search on answer
    int l = 0, r = n, ans = 0;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (check(mid)) {
            ans = mid;    
            l = mid + 1;   
        } else {
            r = mid - 1;
        }
    }

    cout << ans << "\n";
    return 0;
}
