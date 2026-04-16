#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x;
    cin>>n;
    set<int> num;
    for(int i=0;i<n;i++){
        cin>>x;
        num.insert(x);
    }
    cout<<num.size()<<"\n";
    
    
    return 0;
}