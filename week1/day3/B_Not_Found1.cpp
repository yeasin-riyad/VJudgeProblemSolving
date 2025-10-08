#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    map<char,int> count;
    for(char ch:s){
        count[ch]++;
    };
    bool found=false;
    for(char ch='a';ch<='z';ch++){
        if(count[ch]==0){
            found=true;
            cout<<ch<<endl;
            break;
        }
    };
    if(!found) cout<<"None";
    return 0;
}