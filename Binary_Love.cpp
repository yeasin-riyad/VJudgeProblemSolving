#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    
    while (T--) {
        int n;
        string s;
        cin >> n >> s;
        
        int c01 = 0, c10 = 0;
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == '0' && s[i+1] == '1') c01++;
            if (s[i] == '1' && s[i+1] == '0') c10++;
        }
        
        if (c01 == c10 && c01 > 0) {
            cout << "Alice\n";
            continue;
        }
        
    
        
        bool all_same = true;
        for (int i = 1; i < n; i++) {
            if (s[i] != s[0]) {
                all_same = false;
                break;
            }
        }
        
        if (all_same) {
            cout << "Bob\n";
            continue;
        }
        
        int blocks = 1;
        for (int i = 1; i < n; i++) {
            if (s[i] != s[i-1]) blocks++;
        }
        
        if (blocks % 2 == 0) {
            if (blocks == 2) {
                cout << "Bob\n";
            } else {
                cout << "Alice\n";
            }
        } else {
            cout << "Alice\n";
        }
    }
    
    return 0;
}