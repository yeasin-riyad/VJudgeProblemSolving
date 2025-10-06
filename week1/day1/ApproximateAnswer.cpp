#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x,y,k;
    cin>>x>>y>>k;
    if(abs(x-y)<=k){
        cout<<"Yes\n";
    }else{
        cout<<"No\n";
    }
    return 0;
}