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
        int bits=log2(n)+1;
        int res=1;
        res=max(n-(1<<(bits-1))+1,(1<<(bits-2)));
        cout<<res<<"\n";
        
    }
    return 0;
}