#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    vector<int> b(m);
    vector<int> result;
    
    for(int i=0;i<n;i++) cin>>a[i];
    for(int j=0;j<m;j++) cin>>b[j];
    int i=0,j=0,count=0;
    for(int j=0;j<m;j++){
        while(i<n && a[i]<b[j]){
            count++;
            i++;
        }
        cout<<count<<" ";
    }


    return 0;
}