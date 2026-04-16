#include<bits/stdc++.h>
using namespace std;

long long C[40][40];

void precompute() {
    for (int i = 0; i < 40; i++) {
        C[i][0] = 1;
        for (int j = 1; j <= i; j++) {
            C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
        }
    }
}

void solve() {
    long long n, k;
    cin >> n >> k;
    long long d = 0;
    long long temp = n;
    while (temp > 1) {
        temp >>= 1;
        d++;
    }

    long long winnable = 0;
    if (1 + d <= k) {
        winnable++;
    }
    for (int m = 1; m <= d; m++) {
        long long limit = k - m;
        if (limit < 0) continue;
        for (int j = 0; j <= min((long long)m - 1, limit); j++) {
            winnable += C[m - 1][j];
        }
    }

    cout << n - winnable << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    precompute();

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}