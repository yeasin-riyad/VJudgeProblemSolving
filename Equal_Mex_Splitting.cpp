#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,ans=0,val;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>val;
            if(val) ans++;
        }
        cout<<max(ans,n-ans)<<"\n";
    }
    return 0;
}