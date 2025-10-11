#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s,ans;
    cin>>s;

    for(char ch:s){
        if(isupper(ch)) ans.push_back(ch);
    }
    cout<<ans;
    return 0;
}