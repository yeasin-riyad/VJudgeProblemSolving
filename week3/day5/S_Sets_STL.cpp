#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin>>q;
    set<int> num;
    while(q--){
        int x,y;
        cin>>x;
        if(x==1) {
            cin>>y;
            num.insert(y);
        }
        else if(x==3) {
            cin>>y;
            if(num.count(y)){
                cout<<"Yes\n";
            }else {
                cout<<"No\n";
            }
        }else{
            cin>>y;
            if(num.count(y)){
                num.erase(y);
            }
        }
    }
    return 0;
}