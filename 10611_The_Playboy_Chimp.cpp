#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q, x;
    cin >> n;
    vector<int> num(n);
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> x;
        int l = 0, r = n - 1, idx = 0;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (num[mid] < x)
            {
                idx = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        int second_height = *upper_bound(num.begin(), num.end(), x);
        cout << num[idx] << " " << (second_height == -1 ? "X" : to_string(second_height)) << "\n";
    }
    return 0;
}