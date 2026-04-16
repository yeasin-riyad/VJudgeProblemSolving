#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,q,x;
        cin>>n>>q;
        vector<int> num(n);
        for(int i=0;i<n;i++){
            cin>>num[i];
        }
        sort(num.begin(),num.end(),greater<int>());
        vector<int> pre_sum(n,0);
        pre_sum[0]=num[0];
        for(int i=1;i<n;i++){
            pre_sum[i]=num[i]+pre_sum[i-1];
        }
        for(int i=0;i<q;i++){
            cin>>x;
            auto res=lower_bound(pre_sum.begin(),pre_sum.end(),x);
            if(res==pre_sum.end()) cout<<-1<<"\n";
            else cout<<(res-pre_sum.begin())+1<<"\n";
        }
    }
    return 0;
}