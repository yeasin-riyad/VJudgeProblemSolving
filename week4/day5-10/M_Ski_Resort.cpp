#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){      
        int n,k,q;
        cin>>n>>k>>q;
        vector<int> weather(n);
        
        for(int i=0;i<n;i++){
            cin>>weather[i];
        }
      
        long long result=0;
        int l=0,r=0;
      
        while(r<n){
            if(weather[r]<=q){
               
               if(r-l+1>=k){
                 result+=(r-l+1)-k+1;
               
               }
                 r++;
                
            }else{
                r++;
                l=r;
            }
        }
        // cout<<"\n";
        cout<<result<<"\n";
    }
    return 0;
}