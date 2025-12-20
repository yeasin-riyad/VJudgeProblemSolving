#include <bits/stdc++.h>
using namespace std;
#define int long long

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int A, B, N;
        cin >> A >> B >> N;
        
  
        if (A % B == 0) {
            cout << -1 << "\n";
            continue;
        }
        
        int start = (N + A - 1) / A * A;
        
        if (start % B != 0) {
            cout << start << "\n";
            continue;
        }
        
      
        int next_multiple = start + A;
        
     
            cout << next_multiple << "\n";
        
    }
    
    return 0;
}