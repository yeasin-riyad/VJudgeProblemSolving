#include <bits/stdc++.h>
using namespace std;

int compute_gcnd(int x, int y) {
    int m = max(x, y);
    
    for (int z = m; z >= 1; z--) {
        if (x % z != 0 && y % z != 0) {
            return z;
        }
    }
    return 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        
        sort(A.begin(), A.end(), greater<int>());
        
        int ans = 0;
        
        for (int i = 0; i < min(N, 100); i++) {
            for (int j = i + 1; j < min(N, 100); j++) {
                ans = max(ans, compute_gcnd(A[i], A[j]));
            }
        }
        
        cout << ans << "\n";
    }
    
    return 0;
}