#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q;
    cin>>n>>q;
    vector<int> a(n+1),diff(n+2,0),prefix(n+2,0);
    for(int i=1;i<=n;i++) cin>>a[i];
    while(q--){
        int l,r,v;
        cin>>l>>r>>v;
        diff[l]+=v;
        diff[r+1]+=-v;

    }
    for(int i=1;i<=n;i++){
        prefix[i]=prefix[i-1]+diff[i];
    }
       for(int i=1;i<=n;i++){
        a[i]+=prefix[i];
        cout<<a[i]<<" ";
    }
    return 0;
}