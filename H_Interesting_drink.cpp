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
    sort(num.begin(),num.end());
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>x;
        int res=upper_bound(num.begin(),num.end(),x)-num.begin();
        cout<<res<<"\n";

    }
    return 0;
}