#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        
        int ajisai_ones = 0, mai_ones = 0;
        
        for (int i = 0; i < n; i++) {
            if ((i + 1) % 2 == 1) {
                // Ajisai controls this position
                // She can choose the maximum between a[i] and b[i] for her XOR
                ajisai_ones += max(a[i], b[i]);
                // Mai gets the other value
                mai_ones += (a[i] + b[i] - max(a[i], b[i]));
            } else {
                // Mai controls this position  
                // She can choose the maximum between b[i] and a[i] for her XOR
                mai_ones += max(a[i], b[i]);
                // Ajisai gets the other value
                ajisai_ones += (a[i] + b[i] - max(a[i], b[i]));
            }
        }
        
        // Since we're dealing with XOR, we need to check parity of ones
        // For XOR, the result is 1 if number of ones is odd, 0 if even
        
        bool ajisai_xor = (ajisai_ones % 2 == 1);
        bool mai_xor = (mai_ones % 2 == 1);
        
        if (ajisai_xor && !mai_xor) {
            cout << "Ajisai\n";
        } else if (!ajisai_xor && mai_xor) {
            cout << "Mai\n";
        } else {
            cout << "Tie\n";
        }
    }
    
    return 0;
}