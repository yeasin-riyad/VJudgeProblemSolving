#include<bits/stdc++.h>
using namespace std;
long long int LCM(long long a,long long b){
    return a/__gcd(a,b)*b;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n,a,b,p,q;
    cin>>n>>a>>b>>p>>q;
    long long int red=n/a;
   long long int blue=n/b;
   long long int both=n/LCM(a,b);
    long long int ans=0;
    if(p>q){
        ans=red*p+(blue-both)*q;

    }else{
        ans=blue*q+(red-both)*p;
    }
    cout<<ans<<"\n";
    return 0;
}