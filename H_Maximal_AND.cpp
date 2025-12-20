#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while(t--){
        int n;
        long long k;
        cin >> n >> k;

        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        vector<int> cnt(31, 0);

        for(int i = 0; i < n; i++){
            for(int j = 0; j <= 30; j++){
                if((a[i] >> j) & 1){
                    cnt[j]++;
                }
            }
        }

        long long result = 0;

        for(int j = 30; j >= 0; j--){
            int need = n - cnt[j];  

            if(need <= k){
                k -= need;
                result += (1LL << j);
            }
        }

        cout << result << "\n";
    }

    return 0;
}
