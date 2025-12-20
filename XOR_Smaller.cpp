#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector <int> num(n);
    for(int i=0;i<n;i++) cin>>num[i];

    int andResult=num[0];
    for(int val:num){
        andResult &= val;
    }

    long long int result=0;

    for(int bit=0;bit<30;bit++){
        if(andResult & (1ll<<bit)){
            result+=1ll<<bit;

        }

    }
    cout<<result<<"\n";

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();

    }
    return 0;
}