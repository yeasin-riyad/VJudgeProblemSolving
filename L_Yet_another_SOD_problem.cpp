#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll L,R;
        cin>>L>>R;
        ll Res=(R/3)-(L-1)/3;
        cout<<Res<<"\n";
    }
    return 0;
}