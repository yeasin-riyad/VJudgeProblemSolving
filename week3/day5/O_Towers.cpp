#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,result=1;
    cin>>n;
    multiset<int>tower;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        tower.insert(x);
        auto it=tower.upper_bound(x);
        if(it!=tower.end()){
            tower.erase(it);
        
        }
     
    }
       cout<<tower.size();
    return 0;
}