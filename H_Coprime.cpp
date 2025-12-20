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

        vector<int> last(1001, -1); 

        for(int i=1; i<=n; i++){
            int x;
            cin >> x;
            last[x] = i;
        }

        int ans = -1;

        for(int i=1; i<=1000; i++){
            if(last[i] == -1) continue;

            for(int j=1; j<=1000; j++){
                if(last[j] == -1) continue;

                if(__gcd(i,j) == 1) { 
                    ans = max(ans, last[i] + last[j]);
                }
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
