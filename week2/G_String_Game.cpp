#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        int count0=0,count1=0;
        for(char ch:s){
            if(ch=='0') count0++;
            else count1++;
        }
        int result=min(count0,count1);
        if(result%2==1) cout<<"Zlatan\n";
        else cout<<"Ramos\n";
    }
    return 0;
}