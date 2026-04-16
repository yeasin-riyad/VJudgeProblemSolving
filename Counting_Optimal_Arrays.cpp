#include <bits/stdc++.h>
using namespace std;
const int MOD = 998244353;

long long mod_pow(long long a, long long b) {
    long long res = 1;
    while (b) {
        if (b & 1) res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    
    while (t--) {
        long long N, M;
        cin >> N >> M;
        
        if (N == 1) {
            cout << (M + 1) % MOD << "\n";
            continue;
        }
        
        long long L = 0;
        while ((1LL << L) <= M) L++;
        L--; 
        
        long long max_xor = (1LL << (L + 1)) - 1;
        
        if (max_xor > 2 * M) {
            max_xor = 2 * ((1LL << L) - 1);
            if (max_xor > 2 * M) {
                while (max_xor > 2 * M && L > 0) {
                    L--;
                    max_xor = (1LL << (L + 1)) - 1;
                }
            }
        }
        
        long long result;
        
        if (max_xor == 0) {
            result = mod_pow(M + 1, N);
        } else {
      
            
            if (N % 2 == 0) {
                long long cnt = 0;
                long long mask = max_xor;
                
                if (mask <= M) {
                    cnt = M + 1 - (mask + 1) / 2;
                } else {
                    cnt = 2 * (M + 1) - (mask + 1);
                    if (cnt < 0) cnt = 0;
                }
                result = (2 * cnt) % MOD;
            } else {
                long long cnt = 0;
                long long mask = max_xor;  
                if (mask <= M) {
                    cnt = M + 1 - (mask + 1) / 2;
                } else {
                    cnt = 2 * (M + 1) - (mask + 1);
                    if (cnt < 0) cnt = 0;
                }  
                result = cnt % MOD;
            }
        }   
        cout << result << "\n";
    }
    
    return 0;
}