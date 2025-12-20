#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int less=0,greater=0,equal=0;
        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            if(num<x) less++;
            else if(num>x) greater++;
            else equal++;

        }
        if(less>0 && greater>0 && equal==0){
            cout<<"No\n";
        }else{
            cout<<"Yes\n";
        }
    }
    return 0;
}