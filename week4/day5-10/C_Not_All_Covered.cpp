#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, M;
    if (!(cin >> N >> M)) return 0;
    
    vector<int> diff(N + 3, 0);
    for (int i = 0; i < M; ++i) {
        int L, R;
        cin >> L >> R;
        diff[L] += 1;
        diff[R + 1] -= 1;
    }
    
    int cur = 0;
    int ans = INT_MAX;
    for (int i = 1; i <= N; ++i) {
        cur += diff[i];
        ans = min(ans, cur);
    }
    if (ans == INT_MAX) ans = 0;
    cout << ans << '\n';
    return 0;
}
