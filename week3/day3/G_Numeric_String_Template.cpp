#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n;
        vector<int> num(n);
        for(int i=0;i<n;i++) cin>>num[i];
        cin>>m;
        while(m--){
            string s;
            cin>>s;
            if(s.length()!=n){
                cout<<"NO\n";
                continue;
            }
            map<int,char> num_to_char;
            map<char,int> char_to_num;
            for(int i=0;i<s.length();i++){
                num_to_char[num[i]]=s[i];
                char_to_num[s[i]]=num[i];
            }
            bool res=false;
            for(int i=0;i<n;i++){
                int val=num[i];
                char ch=s[i];
                if(num_to_char[val]!=ch || char_to_num[ch]!=val){
                    cout<<"NO\n";
                    res=true;
                    break;
                }
            }
            if(!res) cout<<"YES\n";
        }
    }
    return 0;
}