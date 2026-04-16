#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];
        sort(b.begin(), b.end());
        string gdCode;
        cin >> gdCode;
        vector<int> first_reach(2 * k + 1, k + 1);
        int cur_d = 0;
        for (int i = 0; i < k; i++)
        {
            if (gdCode[i] == 'L')
                cur_d--;
            else
                cur_d++;
            if (first_reach[cur_d + k] == k + 1)
            {
                first_reach[cur_d + k] = i + 1;
            }
        }
        vector<int> death_counts(k + 2, 0);
        for (int i = 0; i < n; i++)
        {
            int dt = k + 1;
            auto it = lower_bound(b.begin(), b.end(), a[i]);
            if (it != b.end())
            {
                long long d = (long long)*it - a[i];
                if (d <= k)
                    dt = min(dt, first_reach[(int)d + k]);
            }
            if (it != b.begin())
            {
                long long d = (long long)*(--it) - a[i];
                if (d >= -k)
                    dt = min(dt, first_reach[(int)d + k]);
            }
            if (dt <= k)
                death_counts[dt]++;
        }
        int alive = n;
        for (int i = 1; i <= k; i++)
        {
            alive -= death_counts[i];
            cout << alive << (i == k ? "" : " ");
        }
        cout << "\n";
    }
    return 0;
}