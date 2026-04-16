#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> a(n+1), pos(n+1);

    for (int i = 1; i <= n; i++) {
            cin >> a[i];
            pos[a[i]] = i;  
    }

    int rounds = 1;
    for (int i = 1; i < n; i++) {
        if (pos[i] > pos[i+1])
            rounds++;
    }

    while (m--) {
        int p, q;
        cin >> p >> q;

        int x = a[p]; 
        int y = a[q]; 

        set<int> cand = {x, y, x-1, y-1};

        for (int t : cand) {
            if (t >= 1 && t < n) {
                if (pos[t] > pos[t+1])
                    rounds--;
            }
        }

        swap(a[p], a[q]);
        swap(pos[x], pos[y]);

        for (int t : cand) {
            if (t >= 1 && t < n) {
                if (pos[t] > pos[t+1])
                    rounds++;
            }
        }

        cout << rounds << '\n';
    }

    return 0;
}
