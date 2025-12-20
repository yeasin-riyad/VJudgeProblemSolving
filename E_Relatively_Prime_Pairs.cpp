#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int l,r;
    cin>>l>>r;
    vector<pair<long long int,long long int>>result;
    for(long long int i=l;i<=r;i+=2){
        result.push_back({i,i+1});
    }
    if(result.size()>0){
        cout<<"YES\n";
        for(auto p:result){
            cout<<p.first<<" "<<p.second<<"\n";
        }
    }else{
        cout<<"NO";
    }
    return 0;
}