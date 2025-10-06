#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,count=0;
        cin>>n;
        vector<int> num(n);
        for(int i=0;i<n;i++){
            cin>>num[i];
            if(num[i]==1) count++;
        }
        cout<<n-(count/2)<<"\n";
    }
    return 0;
}