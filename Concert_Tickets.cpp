#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    multiset <int> ticket_price;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ticket_price.insert(x);
    }
    while(m--){
        int budget;
        cin>>budget;
       auto it= ticket_price.upper_bound(budget);
       if(it==ticket_price.begin()) {
        cout<<"-1"<<"\n";
        continue;
       }
       --it;
       cout<<*it<<"\n";
       ticket_price.erase(it);
    }
    return 0;
}