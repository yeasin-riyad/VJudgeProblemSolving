#include <bits/stdc++.h>
using namespace std;

long long lcm(long long a, long long b) {
    return (a / __gcd(a, b)) * b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while(t--) {
        long long A, B;
        cin >> A >> B;

        long long g = __gcd(A, B);

        long long opt1 = lcm(A, B) - B;

        long long opt2 = lcm(A, g) - g;

        cout << min(opt1, opt2) << "\n";
    }

    return 0;
}
