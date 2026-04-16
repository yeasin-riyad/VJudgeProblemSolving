#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (is_sorted(s.begin(), s.end())) {
        cout << 0 << endl;
        return;
    }

    string sorted_s = s;
    sort(sorted_s.begin(), sorted_s.end());

    vector<int> indices;
    for (int i = 0; i < n; i++) {
        if (s[i] != sorted_s[i]) {
            indices.push_back(i + 1);
        }
    }

    cout << 1 << endl;
    cout << indices.size();
    for (int idx : indices) {
        cout << " " << idx;
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}