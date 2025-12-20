#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        long long n,m;
        cin>>n>>m;
        if(m<n||m> 3*n) {
            cout<<"NO\n";
        } else {
            if((m % 2) == (n % 2)) {
                cout <<"YES\n";
            } else {
                cout <<"NO\n";
            }
        }
    }
    
    return 0;
}