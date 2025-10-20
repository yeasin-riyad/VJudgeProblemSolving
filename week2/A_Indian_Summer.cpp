#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    set<pair<string,string>>leafs;
    while(n--){
        string species,color;
        cin>>species>>color;
        leafs.insert({species,color});
    }
    cout<<leafs.size();
    return 0;
}