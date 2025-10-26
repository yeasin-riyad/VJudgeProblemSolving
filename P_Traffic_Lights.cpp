#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x,n;
    cin>>x>>n;
    set<int> lights;
    multiset<int> lengths;
    lights.insert(0);
    lights.insert(x);
    lengths.insert(x);
    while(n--){
        int pos;
        cin>>pos;
        auto it=lights.upper_bound(pos);
        int right=*it;
        --it;
        int left=*it;
        int left_len=pos-left;
        int right_len=right-pos;
        lengths.erase(lengths.find(right-left));
        lengths.insert(left_len);
        lengths.insert(right_len);
        lights.insert(pos);
        cout<<*lengths.rbegin()<<" ";
    }
    return 0;
}