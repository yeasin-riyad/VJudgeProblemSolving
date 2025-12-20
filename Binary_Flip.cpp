#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        int cnt0=0,cnt1=0;
        cin>>n;
        cin>>s;
        for(int i=0;i<n-1;i++){
            if(s[i]=='0' && s[i+1]=='0') cnt0++;
            else if(s[i]=='1' && s[i+1]=='1') cnt1++;
        }
        if(cnt1>=cnt0) cout<<0<<"\n";
        else{
            long long diff = cnt0 - cnt1;
            cout << (diff + 1) / 2 << "\n";
        }
   
    }
    return 0;
}