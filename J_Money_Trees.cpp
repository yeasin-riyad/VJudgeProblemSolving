#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> f(n);
        vector<int> h(n);
        for(int i=0;i<n;i++) cin>>f[i];
        for(int i=0;i<n;i++) cin>>h[i];
        long long int sum=0;
        int result=0;
        int l=0,r=0;
        while(r<n){
            sum+=f[r];

            if(r>0 && h[r-1]%h[r]!=0){
                sum=f[r];
                l=r;
            }
          
         
            

            while(sum>k){
                sum-=f[l];
                l++;
            }

            if(sum<=k){
                result=max(result,(r-l+1));

            }
            r++;
        }
        cout<<result<<"\n";
    }
    return 0;
}