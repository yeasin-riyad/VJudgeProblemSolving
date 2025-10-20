#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<string> chats(n);
    vector<string> seen;
    unordered_set<string> result;
    for(int i=0;i<n;i++){
        cin>>chats[i];
    }
    for(int i=n-1;i>=0;i--){
        if(result.find(chats[i])==result.end()){
            result.insert(chats[i]);
            seen.push_back(chats[i]);
        }
    }

    for(string person:seen) cout<<person<<"\n";
    

    return 0;
}