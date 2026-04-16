#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        if (k > n) {
            cout << -1 << "\n";
            continue;
        }
        long long c_min = n, c_max = n;
        int time = 0;
        bool found = false;
        while (c_max >= k) {
            if (c_min == k || c_max == k) {
                cout << time << "\n";
                found = true;
                break;
            }
            long long n_min = c_min / 2;
            long long n_max = (c_max + 1) / 2;
            c_min = n_min;
            c_max = n_max;
            time++;

            if (c_max == 0) break;
        }

        if (!found) {
            cout << -1 << "\n";
        }
    }

    return 0;
}