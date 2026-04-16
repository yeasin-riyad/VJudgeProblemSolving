#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--) {
            int n;
            cin >>n;
            long long sum = 0;
            for (int i=1;i<=n;i++) {
                int a;
                cin >> a;
                sum += 1LL * i * a;
            }
            cout << sum << "\n";
    }
    return 0;
}
