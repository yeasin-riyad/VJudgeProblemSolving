#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s;
        stack<int> small,capital;
        cin>>s;
        for(int i=0;i<s.size();i++){
            if(s[i]>='A' && s[i]<='Z' && s[i]!='B') capital.push(i);
            if(s[i]>='a' && s[i]<='z' && s[i]!='b') small.push(i);
            if(s[i]=='B' && !capital.empty()){
                int idx=capital.top();
                capital.pop();
                s[idx]='#';

            };
            if(s[i]=='b' && !small.empty()){
                int idx=small.top();
                small.pop();
                s[idx]='#';

            }



        }

        for(int i=0;i<s.size();i++){
            if(s[i]!='#' && s[i]!='B' && s[i]!='b') cout<<s[i];
            
        }
        cout<<"\n";
   
    }
    return 0;
}