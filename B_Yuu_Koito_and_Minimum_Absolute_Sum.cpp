#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        if (a[0] == -1 && a[n-1] == -1) {
            a[0] = 0;
            a[n-1] = 0;
        }
        else if (a[0] == -1) {
            a[0] = a[n-1];
        }
        else if (a[n-1] == -1) {
            a[n-1] = a[0];
        }
        
     
        for (int i = 0; i < n; i++) {
            if (a[i] == -1) {
                a[i] = 0;
            }
        }
        
        int min_val = abs(a[n-1] - a[0]);
        
        cout << min_val << "\n";
        
        for (int i = 0; i < n; i++) {
            cout << a[i];
            if (i < n-1) cout << " ";
        }
        cout << "\n";
    }
    
    return 0;
}