#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        ll m;
        cin >> n >> m;
        vector<ll> a(n), b(n);
        for (int i=0;i<n;i++)
            cin >> a[i];
        for (int i=0;i<n;i++)
            cin >> b[i];

        vector<ll>prefb(n+1, 0);
        for (int i=1;i<=n;i++)
            prefb[i] = prefb[i - 1] + b[i - 1];

        ll sumb = prefb[n];
        ll c = LLONG_MIN;

        for (int i=1;i<=n;i++)
        {
            c = max(c,a[i - 1] + (sumb - prefb[i]));
        }

        ll k = max(0LL,c - sumb - 1);
        k = min(k, m);

        ll ans = 0;
        ans +=k*c;

        ll cnt =m-k;
        ans += cnt * (sumb)+((k + 1 + m)*cnt) / 2;

        cout << ans << "\n";
    }
    return 0;
}
