#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        ll h;
        cin >> n >> m >> h;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<ll> cur_sum(n, 0);
        vector<int> modified;
        vector<bool> is_mod(n, false);
        for (int i = 0; i < m; i++)
        {
            int b;
            ll c;
            cin >> b >> c;
            b--;
            if (!is_mod[b])
            {
                is_mod[b] = true;
                modified.push_back(b);
            }
            cur_sum[b] += c;
            if (a[b] + cur_sum[b] > h)
            {
                for (int idx : modified)
                {
                    cur_sum[idx] = 0;
                    is_mod[idx] = false;
                }
                modified.clear();
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] + cur_sum[i] << (i == n - 1 ? "" : " ");
        }
        cout << "\n";
    }
    return 0;
}