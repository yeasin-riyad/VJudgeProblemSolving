#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        long long sum = 0;

        for(int i = 1; i < n; i++)
            sum += abs(a[i] - a[i-1]);

        long long bestGain = 0;

        for(int i = 1; i < n-1; i++){
            long long before = abs(a[i] - a[i-1]) + abs(a[i+1] - a[i]);
            long long after  = abs(a[i+1] - a[i-1]);
            bestGain = max(bestGain, before - after);
        }

        // option: skip first or last
        bestGain = max(bestGain, (long long)abs(a[1] - a[0]));
        bestGain = max(bestGain, (long long)abs(a[n-1] - a[n-2]));

        cout << sum - bestGain << "\n";
    }
}
