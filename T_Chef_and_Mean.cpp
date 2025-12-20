#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<long long> arr(n);
        long long sum = 0;
        
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }
        
       
        if (sum % n != 0) {
            cout << "Impossible\n";
            continue;
        }
        
        long long target = sum / n;
        int result = -1;
        
        for (int i = 0; i < n; i++) {
            if (arr[i] == target) {
                result = i + 1;  
                break;
            }
        }
        
        if (result == -1) {
            cout << "Impossible\n";
        } else {
            cout << result << "\n";
        }
    }
    
    return 0;
}