#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<pair<ll,int>> A(n); 
        for (int i=0;i<n;i++) {
            cin>>A[i].first;
            A[i].second=i;
        }

        sort(A.begin(),A.end());

        vector<ll>ans(n);

        for(int i=0;i<n;i++) {
            if (i==0||i==n-1) {
                ans[A[i].second]=-1;
            }else{
                ll left=(A[i - 1].first + A[i].first) / 2;
                ll right=(A[i].first + A[i + 1].first) / 2;
                ans[A[i].second]=right-left;
            }
        }

        for (auto x : ans) cout << x << " ";
        cout << "\n";
    }

    return 0;
}
