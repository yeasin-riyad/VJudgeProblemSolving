#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    unordered_set<string>names;
    string s;
    while(n--){
        cin>>s;
        if(!names.count(s)){
            names.insert(s);
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }

    }
    return 0;
}