#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    vector<int> num(n);
    unordered_map<long long int,int> mp;
 
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    };

    int l=0;
    long long int ans=0;

    for (int r = 0; r<n; r++)
    {
        mp[num[r]]++;
        while(mp.size()>k){
            mp[num[l]]--;
            if(mp[num[l]]==0){
                mp.erase(num[l]);
             
            }
               l++;

        }
        ans+=(r-l+1);
          
    }

    cout<<ans;

    return 0;
}