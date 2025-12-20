#include <bits/stdc++.h>
using namespace std;

long long gcd_vector(const vector<long long> &v, int start, int end){
    long long g = 0;
    for(int i = start; i < end; i++){
        g = __gcd(g, v[i]);
    }
    return g;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end());
        long long mn = a[0];
        int countMin = count(a.begin(), a.end(), mn);

        if(countMin >= 2){
            cout << "Yes\n";
        } else {
            // smallest element occurs exactly once
            long long g = gcd_vector(a, 1, n); // gcd of all except first
            if(g == mn) cout << "Yes\n";
            else cout << "No\n";
        }
    }
    return 0;
}
