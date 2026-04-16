#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k,res=0;
    cin>>n>>k;
    vector<int> num(n);
    for(int i=0;i<n;i++) cin>>num[i];
    sort(num.begin(),num.end());
    long long l=0,r=2e9;

    // Monotonic function
    auto ok=[&](long long median){
        long long operation=0;
         for(int i=n/2;i<n;i++){
            operation+=(num[i]<median)?median-num[i]:0;
         }
         return operation<=k;
    };
    while(l<=r){
        long long mid=l+(r-l)/2;
        if(ok(mid)){
            res=mid;
            l=mid+1;
        }else{
            r=mid-1;
        }
    }

    cout<<res;
    return 0;
}