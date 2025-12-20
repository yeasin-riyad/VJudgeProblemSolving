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
        vector<int> num(n);
        for(int i=0;i<n;i++){
            cin>>x;
            num[i]=x;
            XorResult^=x;
        }
        int Min_Xor=XorResult;
        for(int i=0;i<n;i++){
            Min_Xor=min(Min_Xor,XorResult^num[i]);
        }
        cout<<Min_Xor<<"\n";
    }
    return 0;
}