#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    multiset<int> ticket_price;
    while(n--){
        int x;
        cin>>x;
        ticket_price.insert(x);
    }
    while(m--){
        int price;
        cin>>price;
        auto it=ticket_price.upper_bound(price);
        if(it==ticket_price.begin()) cout<<"-1\n";
        else{
            --it;
            cout<<*it<<"\n";
            ticket_price.erase(it);
        }
    }
    return 0;
}