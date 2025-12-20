#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int x;
        cin >> x;
        
        string s = to_string(x);
        set<char> digits;
        
        for (char c : s) {
            digits.insert(c);
        }
        
        if (digits.count('0')) {
            cout << 0 << endl;
            continue;
        }
        
        bool found = false;
        for (int i = 1; i <= 9; i++) {
            if (digits.count('0' + i)) {
                cout << i << endl;
                found = true;
                break;
            }
        }
    }
    
    return 0;
}