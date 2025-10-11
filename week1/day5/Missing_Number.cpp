#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, val;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        mp[val]++;
    }
    for(int i = 1; i <= n; i++){
        if(mp[i]==0){
            cout<<i;
            break;

        }
        
    }

    return 0;
}