#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    long long int k;
    cin >> n >> k;
    vector<int> num(n);
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    int result = INT_MAX, l = 0, r = 0;
    long long int sum = 0;
    while (r < n)
    {
        sum += num[r];
        while (sum >= k)
        {
            result = min(result, (r - l + 1));
            sum -= num[l];
            l++;
        }
        r++;
    }
    if (result == INT_MAX)
        cout << -1;
    else
        cout << result;

    return 0;
}