#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
     int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());
    
    int ans = 1;
    int cur = 1;
    for (int i = 1; i < a.size(); i++) {
        if (a[i] == a[i - 1] + 1) {
            cur++;
        } else {
            ans = max(ans, cur);
            cur = 1;
        }
    }
    ans = max(ans, cur);
    cout << ans << "\n";
    }
    return 0;
}