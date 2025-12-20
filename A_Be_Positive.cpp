#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        int neg = 0, zero = 0;
        for(int &x : a) {
            cin >> x;
            if(x == -1) neg++;
            if(x == 0) zero++;
        }

        int ops = 0;

        ops += zero;

        if((neg % 2) == 1) ops += 2;

        cout << ops << "\n";
    }

    return 0;
}
