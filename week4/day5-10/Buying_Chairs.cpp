#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int w,p,k;
        cin>>w>>p>>k;
        int max=0;
        int plastic=k-w;
        if(k>w){
            max+=w*2+plastic*1;

        }else if(w>=k){
            max+=k*2;
            
        }
        cout<<max<<"\n";
    }
    return 0;
}