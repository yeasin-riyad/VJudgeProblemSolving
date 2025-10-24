#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
     while(t--){
         int n,m,q;
         cin>>n>>m>>q;
         multiset<int> ms;
         while(m--){
            int x;
            cin>>x;
            ms.insert(x);
         }
         while(q--){
            int pos;
            cin>>pos;
            if(pos<*ms.begin()){
                cout<<*ms.begin()-1<<"\n";
                continue;
            }
            if(pos>*ms.rbegin()){
                cout<<n-*ms.rbegin()<<"\n";
                continue;
            }

            auto it=ms.lower_bound(pos);
            auto jt=it--;
            int mid=(*it+*jt)/2;
            int res=min(abs(mid-*jt),abs(*it-mid));
            cout<<res<<"\n";
         }
     }
    return 0;
}