#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string pat,txt;
    cin>>txt>>pat;
    map<char,int> mp;
    for(char ch:pat) mp[ch]++;
    int l=0,r=0,k=pat.length(),n=txt.length(),count=0;
    map<char,int> window;
    while(r<n){
        window[txt[r]]++;
        if(r-l+1==k){
           if(window == mp) count++;
           window[txt[l]]--;
           if(window[txt[l]]==0) window.erase(txt[l]);
           l++;
        }
        r++;
    }
    cout<<count;
    return 0;
}