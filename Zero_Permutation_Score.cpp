#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int res=((n-1)/2)*((n-2)/2);
        cout<<res<<"\n";
    }
    return 0;
}