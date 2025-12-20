#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        if (k == 1) {
            cout << n << "\n";
            continue;
        }
        
   
        int max_gcd = 1;
        
       
        int best_d = n / k;
        
     
        for (int d = best_d; d >= 1; d--) {
            if (n / d >= k) {
                max_gcd = d;
                break;
            }
        }
        
        for (int i = 1; i <= k; i++) {
            cout << (i * max_gcd) << " ";
        }
        cout << "\n";
    }
    
    return 0;
}