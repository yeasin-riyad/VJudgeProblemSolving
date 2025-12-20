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
        string s;
        cin>>s;
        bool start=false;
        for(int i=0;i<n;i++){
            if(s[i]=='0') {
                start=true;
                continue;

            }
            if(start && s[i]=='1') count++;
        }
        cout<<count<<"\n";
    }
    return 0;
}