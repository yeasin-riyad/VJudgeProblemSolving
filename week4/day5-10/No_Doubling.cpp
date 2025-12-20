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
        vector<long long int>num(n);
        for(int i=0;i<n;i++){
            cin>>num[i];
        }
        sort(num.begin(),num.end());
        cout<<num[n-1]<<" ";
        for(int i=0;i<n-1;i++){
           cout<<num[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}