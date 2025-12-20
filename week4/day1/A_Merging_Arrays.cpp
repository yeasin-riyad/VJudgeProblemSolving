#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    vector<int>b(m);
    vector<int> Merge;
    Merge.reserve(n+m);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int j=0;j<m;j++) cin>>b[j];

    int i=0,j=0;
    while (i<n && j<m)
    {
       if(a[i]<b[j]){
        Merge.push_back(a[i]);
        i++;
       }else{
        Merge.push_back(b[j]);
        j++;
       }
    }

    while(i<n){
        Merge.push_back(a[i++]);
    }
    while(j<m){
        Merge.push_back(b[j++]);
       
    }

    for(int val:Merge) cout<<val<<" ";
    
    return 0;
}