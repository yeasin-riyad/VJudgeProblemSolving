#include<bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<long long> A(n);
        for (int i=0;i<n;i++) {
            cin>>A[i];
        }
        if (n==2) {
            cout<<0<<"\n";
            continue;
        }
        long long g=0;
        for (int i=1;i<n;i++) {
            g=__gcd(g,A[i]-A[i-1]);
        }
        long long total =(A[n - 1]-A[0])/g + 1;
        cout<<total-n<<"\n";
    }
    return 0;
}
