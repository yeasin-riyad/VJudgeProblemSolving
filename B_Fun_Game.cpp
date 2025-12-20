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
        string s,t;
        cin>>s>>t;
    
        if(s==t){
            cout<<"YES\n";
            continue;
        }
      int pos=-1;
      for(int i=0;i<n;i++){
        if(s[i]=='1'){
            pos=i;
            break;
        }
      };
      bool result=true;
      if(pos==-1){
        cout<<"NO\n";
        continue;
        
      }else{
        for(int i=0;i<n;i++){
            if(s[i]!=t[i]){
                if(pos>i){
                    result=false;
                   
                }
                 break;
            }
        }
      }

      if(result) cout<<"YES\n";
      else cout<<"NO\n";

    }
    return 0;
}