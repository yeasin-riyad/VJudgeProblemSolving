#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    long long nb, ns, nc;
    cin >> nb >> ns >> nc;

    long long pb, ps, pc;
    cin >> pb >> ps >> pc;

    long long r;
    cin >> r;

    long long cb = 0, cs = 0, cc = 0;
    for (char c : s) {
        if (c == 'B') cb++;
        else if (c == 'S') cs++;
        else if (c == 'C') cc++;
    }

    long long l = 0, rgt = 1e13;
    while (l < rgt) {
        long long mid = (l + rgt + 1) / 2;

        long long needb = max(0LL, cb * mid - nb);
        long long needs = max(0LL, cs * mid - ns);
        long long needc = max(0LL, cc * mid - nc);

        long long cost = needb * pb + needs * ps + needc * pc;

        if (cost <= r) l = mid;
        else rgt = mid - 1;
    }

    cout << l << "\n";
    return 0;
}
