#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

pair<ll, ll> solve_dp(int l, int r, const vector<int>& A, vector<vector<pair<ll, ll>>>& memo) {
    if (l == r) {
        return {A[l], A[l]};
    }
    if (memo[l][r].first != -1) {
        return memo[l][r];
    }

    ll min_val = -1, max_val = -1;
    for (int k = l; k < r; ++k) {
        pair<ll, ll> left = solve_dp(l, k, A, memo);
        pair<ll, ll> right = solve_dp(k + 1, r, A, memo);

        ll current_min = left.first + 2 * right.first;
        ll current_max = left.second + 2 * right.second;

        if (min_val == -1 || current_min < min_val) min_val = current_min;
        if (max_val == -1 || current_max > max_val) max_val = current_max;
    }

    return memo[l][r] = {min_val, max_val};
}

void solve() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> A(n);
    for (int i=0;i<n;i++) cin >> A[i];
    vector<vector<pair<ll, ll>>> memo(n, vector<pair<ll, ll>>(n, {-1, -1}));
    pair<ll, ll> result = solve_dp(0, n - 1, A, memo);
    cout << result.first << " " << result.second << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >>t;
    while (t--) {
        solve();
    }
    return 0;
}