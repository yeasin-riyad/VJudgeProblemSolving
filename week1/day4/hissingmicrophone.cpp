#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    bool consecutive=false;
    for(int i=1;i<s.length();i++){
        if(s[i-1]=='s' && s[i]=='s') {
            consecutive=true;
            cout<<"hiss";
            break;
        }
    }

    if(!consecutive) cout<<"no hiss";
    return 0;
}