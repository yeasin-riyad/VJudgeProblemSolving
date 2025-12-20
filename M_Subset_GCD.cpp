#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int max_gcd=n/k;
        int count=0;
        for(int i=n;i>=1;i--){
            if(count==k) break;
            if(i%max_gcd==0){
                cout<<i<<" ";
                count++;
            }
        }
        cout<<"\n";
    }
    return 0;
}