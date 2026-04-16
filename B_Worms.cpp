#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q,x;
    cin>>n;
    vector<int> num(n);
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    vector<int> pre_sum(n);
    pre_sum[0]=num[0];
    for(int i=1;i<n;i++){
        pre_sum[i]=num[i]+pre_sum[i-1];

    }
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>x;
        int res=lower_bound(pre_sum.begin(),pre_sum.end(),x)-pre_sum.begin();
        cout<<res+1<<"\n";

    }
    return 0;
}