#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n,a,b;
        cin>>n>>a>>b;
        vector<int> temp(n);
        for (int i=0;i<n;i++) {
            cin>>temp[i];
        }

        bool wearing = false; 
        int actions = 0;

        for (int i = 0; i <n; i++) {
            if (!wearing) {
                if (temp[i] <a) {
                    wearing = true;
                    actions++;
                }
            } else {
                if (temp[i] >b) {
                    wearing = false;
                }
            }
        }

        cout << actions << "\n";
    }

    return 0;
}
