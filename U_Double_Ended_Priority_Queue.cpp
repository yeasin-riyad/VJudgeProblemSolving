#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q;
    cin>>n>>q;
    multiset<int> ms;
    while(n--){
        int x;
        cin>>x;
        ms.insert(x);
    }
    while(q--){
        int que,val;
        cin>>que;
        if(que==0){
            cin>>val;
            ms.insert(val);
            continue;
        }
        if(que==1){
            auto it=ms.begin();
            cout<<*it<<"\n";
            ms.erase(it);
            continue;
        }
        if(que==2){
            auto it=ms.rbegin();
            cout<<*it<<"\n";
            ms.erase(prev(it.base()));
            continue;
        }
    }
    return 0;
}