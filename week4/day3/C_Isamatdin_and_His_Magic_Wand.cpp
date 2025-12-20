#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        bool hasEven = false, hasOdd = false;
        for (int x : a)
        {
            if (x % 2 == 0)
                hasEven = true;
            else
                hasOdd = true;
        }

        if (hasEven && hasOdd)
        {
            sort(a.begin(), a.end());
        }

        for(int x:a)
            cout <<x<< " ";
        cout<<"\n";
    }
    return 0;
}