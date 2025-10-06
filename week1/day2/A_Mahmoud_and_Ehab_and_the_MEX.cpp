#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x;
    cin>>n>>x;
    vector<int>num(n);
    for(int i=0;i<n;i++) cin>>num[i];
    set<int> s(num.begin(),num.end());
    int Mex=0;
    for(int i=0;i<x;i++){
        if(s.find(i)==s.end()) Mex++;
    }
    if(s.find(x)!=s.end()) Mex++;
    cout<<Mex<<"\n";
    return 0;
}