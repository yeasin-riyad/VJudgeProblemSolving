#include <bits/stdc++.h>
using namespace std;

// GCD function
long long gcd(long long a, long long b){
    return b == 0 ? a : gcd(b, a % b);
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

        // Sort array
        sort(a.begin(), a.end());

        // Compute GCD of differences
        long long answer = 0;
        for(int i = 1; i < n; i++){
            long long diff = a[i] - a[i-1];
            answer = gcd(answer, diff);
        }

        cout << answer << "\n";
    }

    return 0;
}
