#include <bits/stdc++.h>
using namespace std;
bool canReach(long long n) {
    set<long long> seen;
    while (true) {
        if (n == 1) return true;
        if (seen.count(n)) return false; 
        seen.insert(n);

        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = (3LL ^ n) + 1;
        }
        if (n > 1e16) return false; 
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        cout << (canReach(n) ? "Yes" : "No") << "\n";
    }
    return 0;
}
