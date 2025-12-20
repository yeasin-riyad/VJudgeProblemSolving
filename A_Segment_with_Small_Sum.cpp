#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,ans=0;
    long long int s,sum=0;
    cin>>n>>s;
    vector<int> num(n);
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    int l=0,r=0;
    while(r<n){
        sum+=num[r];
        if(sum<=s){
            ans=max(ans,r-l+1);
         
        }else{
               
            sum-=num[l];
            l++;

        }
        
        r++;

    }
    cout<<ans<<"\n";

    return 0;
}