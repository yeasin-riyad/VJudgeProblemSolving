#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        long long n, x, y;
        cin >> n >> x >> y;
        
        long long top_left = min(x - 1, y - 1);
        long long top_right = min(x - 1, n - y);
        long long bottom_left = min(n - x, y - 1);
        long long bottom_right = min(n - x, n - y);
        
        long long diagonals = top_left + top_right + bottom_left + bottom_right;
        
        long long total = (n - 1) + (n - 1) + diagonals;
        
        cout << total << "\n";
    }
    
    return 0;
}