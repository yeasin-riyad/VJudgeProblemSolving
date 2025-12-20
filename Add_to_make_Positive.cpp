#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        long long sum = 0;
        for(int i=0;i<n;i++) {
            int x;
            cin >> x;
            sum += x;
        }
        if(sum>=0) {
            cout<<0<<"\n";
        } else {
            long long x=(-sum + n - 1)/n;
            cout<<x<<"\n";
        }
    }
    
    return 0;
}