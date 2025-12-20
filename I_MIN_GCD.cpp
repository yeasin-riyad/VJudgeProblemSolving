#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        };

        // case 1
        int cnt_min=0;
        ll Min=LONG_LONG_MAX;
        for(ll x:a){
            Min=min(x,Min);
        }
        for(ll x:a){
            if(x==Min) cnt_min++;
        }
        if(cnt_min>=2){
            cout<<"Yes\n";
            continue;
        }

        // case 2

        if(Min==1){
              ll g=0;
        for(ll x:a){
            if(x==1) continue;
            g=__gcd(g,x);
        }

        if(g==Min){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }
        continue;
        }

        // case 3

        vector<ll> devisors;
        for(ll x:a){
            if(x==Min) continue;
            if(x%Min==0){
                devisors.push_back(x);
            }
        }

        ll g=0;
        for(ll x:devisors){
            g=__gcd(g,x);
        }

        if(g==Min){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }
       
    }
    
    return 0;
}