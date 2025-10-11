#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    while (cin >> n && n != 0)
    {
        int result = (n * (n + 1) * (2 * n + 1)) / 6;
        cout << result<<"\n";
    };

    return 0;
}