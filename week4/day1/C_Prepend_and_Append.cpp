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
        string s;
        cin>>s;
        int l=0,r=n-1;
        while(l<r){
            if((s[l]=='0' && s[r]=='1') || (s[l]=='1' && s[r]=='0')){
                l++;
                r--;
                continue;
            }
            break;
        }

        cout<<r-l+1<<"\n";
    }
    return 0;
}