#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> num(n);

        for(int i = 0; i < n; i++){
            cin >> num[i];
        }

        long long G = 0, G2 = 0;

        for(int i = 0; i < n; i += 2){
            G = __gcd(G, num[i]);
        }

        for(int i = 1; i < n; i += 2){
            G2 = __gcd(G2, num[i]);
        }

        bool ok1 = true, ok2 = true;

        for(int i = 1; i < n; i += 2){
            if(num[i] % G == 0){
                ok1 = false;
                break;
            }
        }

        for(int i = 0; i < n; i += 2){
            if(num[i] % G2 == 0){
                ok2 = false;
                break;
            }
        }

        if(ok1) cout << G << "\n";
        else if(ok2) cout << G2 << "\n";
        else cout << 0 << "\n";
    }
    return 0;
}
