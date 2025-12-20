#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        queue<int> q;
        int res=0;
        for(char ch:s){
            if(q.empty()){
                if(ch=='0') res++;
               else q.push(ch);
            }
           else if(!q.empty()){
            if(ch=='1') q.push(ch);

           }
        }
        cout<<res<<"\n";
    }
    return 0;
}