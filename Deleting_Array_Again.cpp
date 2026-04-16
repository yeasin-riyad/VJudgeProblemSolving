#include <bits/stdc++.h>
using namespace std;

int N;
int a[105], c[105];
long long dp[105][105][105];
bool vis[105][105][105];

// Solve for subarray a[l..r], starting at position p
long long solve(int l, int r, int p) {
    if (l > r) return 0;  // empty segment
    if (vis[l][r][p]) return dp[l][r][p];
    vis[l][r][p] = true;
    long long &res = dp[l][r][p];
    res = LLONG_MAX;

    // try deleting each element k as first in this segment
    for (int k = l; k <= r; ++k) {
        int curIndex = p + (k - l);
        long long costHere = 1LL * a[k] * c[curIndex];
        long long leftCost = solve(l, k - 1, p);           // left subarray starts at same p
        long long rightCost = solve(k + 1, r, curIndex + 1); // right subarray starts after current index
        res = min(res, costHere + leftCost + rightCost);
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        cin >> N;
        for (int i = 1; i <= N; ++i) cin >> a[i];
        for (int i = 1; i <= N; ++i) cin >> c[i];
        memset(vis, 0, sizeof(vis));
        cout << solve(1, N, 1) << '\n';
    }
    return 0;
}
