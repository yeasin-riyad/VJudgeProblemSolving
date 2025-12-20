#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<long long> a(n), c(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> c[i];

        long long totalCost = 0;
        long long prev = a[0]; // previous element in non-decreasing array

        for(int i = 1; i < n; i++) {
            if(a[i] < prev) {
                // change current element
                totalCost += c[i];
            } else {
                // keep current element
                prev = a[i];
            }
        }
        cout << totalCost << "\n";
    }

    return 0;
}
