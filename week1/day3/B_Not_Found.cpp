#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    // sort(s.begin(),s.end());
    // map<int,int> count;
    vector<int> count(26,0);
    for(int i=0;i<s.length();i++){
        count[s[i]-97]++;
    }
    bool lexicographically=true;
    for(int i=0;i<26;i++){
        if(count[i]==0){
            lexicographically=false;
            cout<<char(i+97);
            break;
        }
    }
    if(lexicographically) cout<<"None";
   
    return 0;
}