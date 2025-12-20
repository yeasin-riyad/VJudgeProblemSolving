#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
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
        
        long long pos = 0, neg = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] < b[i]) {
                pos += b[i] - a[i];
            } else if (a[i] > b[i]) {
                neg += a[i] - b[i];
            }
        }
        
        long long result;
        if (pos == neg) {
            result = pos;
        } else {
            result = max(pos, neg);
        }
        
        // If no operations needed, still 1 iteration happens
        if (pos == 0 && neg == 0) {
            result = 1;
        }
        
        cout << result << endl;
    }
    
    return 0;
}