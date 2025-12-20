#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> num(n);
        for(int i=0;i<n;i++){
            cin>>num[i];
        }
        sort(num.begin(),num.end());
        vector <int> dp(n,1);
        int res=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if((num[i]^num[j])==abs(num[i]-num[j])){
                    dp[i]=max(dp[i],dp[j]+1);
                }

            }
            res=max(res,dp[i]);
        }

        cout<<res<<"\n";
    }
    return 0;
}