#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        string r,s;
        cin>>n;
        map<char,int> str;
        map<char,char> val;
        char b;
        for(int i=0;i<n;i++){
            cin>>b;
            s.push_back(b);
            str[b]++;
        }
        for(auto[ch,val]:str){
            r.push_back(ch);
        }
        int len=r.length();
        for(int i=0;i<len;i++){
            val[r[i]]=r[len-i-1];

        }
        for(int i=0;i<n;i++){
            s[i]=val[s[i]];
        }

        cout<<s<<'\n';
    }
    return 0;
}