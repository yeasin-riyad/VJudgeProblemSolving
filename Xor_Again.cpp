#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n;
        int XorResult=0;
        for(int i=0;i<n;i++){
            cin>>x;
            XorResult^=2*x;

        }
        cout<<XorResult<<"\n";
    }
    return 0;
}