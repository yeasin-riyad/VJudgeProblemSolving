#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    map<string, string> ans;
    map<string, string> has;
    for (int i = 0; i < n; i++)
    {
        string s1, s2;
        cin >> s1 >> s2;
        if (has.find(s1) != has.end())
        {
            string s = has[s1];
            ans[s] = s2;
            has.erase(s1);
            has[s2] = s;
        }
        else
        {
            ans[s1] = s2;
            has[s2] = s1;
        }
    }

    cout << ans.size() << "\n";
    for (auto [oldh, newh] : ans)
    {
        cout << oldh << " " << newh << "\n";
    }

    return 0;
}