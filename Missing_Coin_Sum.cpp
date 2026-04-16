#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<long long> a(n);
    for(long long &x : a) cin >> x;

    sort(a.begin(), a.end());

    long long smallest = 1;

    for(long long x : a) {
        if (x > smallest) break;
        smallest += x;
    }

    cout << smallest << "\n";
    return 0;
}
