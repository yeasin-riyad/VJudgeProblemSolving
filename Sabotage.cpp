#include<bits/stdc++.h>
using namespace std;


int main() {
       ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    
    while (t--) {
        int N, X, K;
        cin >> N >> X >> K;
        
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        
        sort(A.begin(), A.end(), greater<int>());
        
        int ans = N + 1;
        
        for (int m = 0; m <= K; m++) {
            int chef_score = X + m * 100;
            int count_greater = 0;
            
            for (int i = 0; i < N; i++) {
                if (i < m) continue;
                if (A[i] > chef_score) {
                    count_greater++;
                }
            }
            
            int rank = count_greater + 1;
            if (rank < ans) {
                ans = rank;
            }
        }
        
        cout << ans << endl;
    }
    
    return 0;
}