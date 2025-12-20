#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<int> num(n);
        for(int i=0;i<n;i++){
            cin>>num[i];
        }
        vector<long long int> prefix_sum(n+1,0);
        vector<long long int> suffix_sum(n+1,0);
      
        for(int i=1;i<=n;i++){
            prefix_sum[i]=prefix_sum[i-1]+num[i-1];
        }
        for(int i=n-1;i>=1;i--){
            suffix_sum[i]=suffix_sum[i+1]+num[i];

        };
        while(q--){
            int l,r,k;
            long long int sum=0;
            cin>>l>>r>>k;
            sum+=prefix_sum[l-1]+suffix_sum[r];
            int val=r-l+1;
            sum+=(val*k);

            if(sum & 1) cout<<"YES\n";
            else cout<<"NO\n";


        }
    }
    return 0;
}