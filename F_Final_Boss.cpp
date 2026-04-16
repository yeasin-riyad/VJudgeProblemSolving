#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        long long h;
        int n;
        cin >> h >> n;
        vector<long long> a(n), c(n);
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<n;i++) cin >> c[i];

        // Sort attacks by damage descending
        vector<pair<long long,long long>> attacks;
        for(int i=0;i<n;i++) attacks.push_back({a[i],c[i]});
        sort(attacks.rbegin(),attacks.rend());

        long long turns = 0;
        while(h > 0){
            long long damage = 0;
            long long min_cool = LLONG_MAX;
            for(auto &p : attacks){
                if(p.first > 0){
                    damage += p.first;
                    min_cool = min(min_cool,p.second);
                }
            }
            if(damage==0) break; // safety
            // Calculate maximum number of turns we can repeat safely
            long long t_use = max(1LL,(h+damage-1)/damage);
            if(min_cool>0) t_use = min(t_use,min_cool);
            h -= damage * t_use;
            turns += t_use;

            // decrease cooldowns
            for(auto &p: attacks){
                if(p.second>0){
                    p.second -= t_use;
                }
            }
        }
        cout << turns << "\n";
    }
    return 0;
}
