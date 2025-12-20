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
        string s;
        cin>>s;
        int l=0,r=0,count=0,result=INT_MAX;
        while(r<n){
            if(s[r]=='W') count++;
            if(r-l+1==k){
                result=min(result,count);
                if(s[l] == 'W') count--; 
                l++;

            };
            r++;
        };
        cout<<result<<"\n";
    }
    return 0;
}