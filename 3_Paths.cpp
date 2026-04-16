#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    if (n<3) {
        cout<<-1<<"\n";
        return;
    }
    vector<vector<int>> grid(n,vector<int>(n, 0));
    for (int j = 0; j < n; j++) grid[0][j] = 1;
    for (int i = 0; i < n; i++) grid[i][n-1] = 1;
    grid[1][n-2] = 1;
    grid[2][n-2] = 1;

    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            cout <<grid[i][j]<<(j == n-1 ? "\n" : " ");
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}
