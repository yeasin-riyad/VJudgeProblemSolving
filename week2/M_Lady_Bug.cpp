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
        string s1,s2;
        cin>>s1>>s2;
        string str1="",str2="";
        for(int i=0;i<n;i++){
            if(i%2==0){
                str1.push_back(s1[i]);
                str2.push_back(s2[i]);
            }else{
                str1.push_back(s2[i]);
                str2.push_back(s1[i]);
            }
        }
        int cnt1=0,cnt2=0;
        for(int i=0;i<str1.size();i++){
            if(str1[i]=='0') cnt1++;
        }
         for(int i=0;i<str2.size();i++){
            if(str2[i]=='0') cnt2++;
        }

        if(cnt1>=ceil(str1.length()/2.0) && cnt2>=str2.length()/2) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}