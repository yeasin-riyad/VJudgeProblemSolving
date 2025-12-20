#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define M 1000000007

ll myPower(ll a,ll b){
    if(b==0) return 1;
    ll res=myPower(a,b/2);
    if(b%2!=0) return (a*res*res)%M;
    else return (res*res)%M;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll res=myPower(2,n-1)%M;
        cout<<res<<"\n";
    }
    return 0;
}