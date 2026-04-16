#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,t;
    cin>>n>>t;
    vector<int> seconds(n);
    for(int i=0;i<n;i++) cin>>seconds[i];
    long long l=1,r=1e18,res=0;
    auto ok=[&] (long long sec){
        long long cnt=0;
        for(int i=0;i<n;i++){
            cnt+=sec/seconds[i];
            if(cnt>=t) return true;

        }
        return false;
    };
    while(l<=r){
        long long mid=l+(r-l)/2;
        if(ok(mid)){
            res=mid;
            r=mid-1;
        }else{
            l=mid+1;
        }
    }

    cout<<res;
    return 0;
}