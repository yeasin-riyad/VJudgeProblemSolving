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
        int start=-1;
        int end=-1;
        for(int i=0;i<n;i++){
            if(s[i]=='B' && start ==-1){
                start =i;
                end=i;
            }
            else if(s[i]=='B') end=i;
        }
        if(start==-1) cout<<0<<'\n';
         else cout<<(end-start)+1<<'\n';
    }
    return 0;
}
