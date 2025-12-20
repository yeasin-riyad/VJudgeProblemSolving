#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    long long int res=0,k;
    cin>>n>>k;
    vector<int> num(n);
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    map<int,int> mp;
    int l=0,r=0;
    while(r<n){
        mp[num[r]]++;
        while((int)mp.size()>k){
            mp[num[l]]--;
            if(mp[num[l]]==0) mp.erase(num[l]);
            l++;
        }

        res+=(r-l+1);
        r++;

    }
    cout<<res<<"\n";
    return 0;
}