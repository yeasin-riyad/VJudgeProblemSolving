#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
 
    while(n--){
         int result=0,k=6;
        while(k--){
            char s;
            cin>>s;
              if(result==3) continue;;
            if(s=='W') result++;
          
            else result=0;
        }
        if(result==3) cout<<"YES\n";
        else cout<<"NO\n";

    }
    return 0;
}