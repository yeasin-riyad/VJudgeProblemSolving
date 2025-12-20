#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q;
    cin>>n>>q;
    vector<int> val(n+1,0);
    vector<int> diff_array(n+2,0),pre_array(n+1,0);

    for(int i=1;i<=n;i++){
        cin>>val[i];
    }
    while(q--){
        int l,r,v;
        cin>>l>>r>>v;
        diff_array[l]+=v;
        diff_array[r+1]-=v;
    }

    for(int i=1;i<=n;i++){
        pre_array[i]=pre_array[i-1]+diff_array[i];
        cout<<pre_array[i]+val[i]<<" ";
    }
    return 0;
}