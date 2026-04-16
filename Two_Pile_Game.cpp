#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        long long x, y;
        cin >> x >> y;
        if (x % 2 == 1)
            cout << "Alice\n";
        else
            cout << "Bob\n";
    }
    return 0;
}
