#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
     cin>>t;
     while(t--){
        int n,q,count=0;
        cin>>n>>q;
        string s;
        cin>>s;
        for(int i=0;i<n;){
            if(s[i]=='B'){
                count++;
                i+=q;
            }else{
                i++;
            }

        }
        cout<<count<<"\n";
     }
    return 0;
}