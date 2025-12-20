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
        vector<string> val(n);
        map<string,bool>ache;
        for(int i=0;i<n;i++){
            cin>>val[i];
            ache[val[i]]=true;
        }

        string s;
        for(int i=0;i<k;i++){
            s.push_back('0');
        }
        bool res=true;

        for(int i=0;i<k;i++){
            s[i]='1';
            if(!ache[s]){
                res=false;
                break;
            }
            s[i]='0';
        }
        if(res) cout<<"YES\n";
        else cout<<"NO\n";
        

    }
    return 0;
}