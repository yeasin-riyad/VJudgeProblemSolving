#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        map<int,int> mp;
        cin>>n;
        while(n--){
            int x;
            cin>>x;
            mp[x]++;
        }
        cout<<mp.size()<<"\n";
    }
    return 0;
}