
#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;

        vector<int> freq(26, 0);
        for(char c : s) {
            freq[c - 'a']++;
        }

        bool ok = false;
        for(int f : freq) {
            if(f >= 2) {
                ok = true;
                break;
            }
        }

        if(ok) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}
