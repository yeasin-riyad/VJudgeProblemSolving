#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> val(n);
    set<int> num;
    for (int i = 0; i < n; i++)
    {
        cin >> val[i];
    }
    int result = 0, start = 0;
    for (int i = 0; i < n; i++)
    {
        if (num.count(val[i]))
        {
            while (num.count(val[i]))
            {
                num.erase(val[start]);
                start++;
            }
        }
        num.insert(val[i]);
        result = max((int)num.size(), result);
    }
    cout << result;
    return 0;
}