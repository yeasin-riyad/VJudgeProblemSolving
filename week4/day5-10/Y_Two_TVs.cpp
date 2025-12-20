#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    map<int,int> mp;
    while(n--){
        int l,r;
        cin>>l>>r;
      
        mp[l]++;
        mp[r+1]--;
    }
    int sum=0;
    bool flag=false;
    for(auto [key,val]:mp){
        sum+=val;
        if(sum>2){
            flag=true;
            break;
        }
       
    }
    if(flag) cout<<"NO";
    else cout<<"YES";
    
    return 0;
}