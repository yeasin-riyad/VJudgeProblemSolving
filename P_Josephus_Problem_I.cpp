#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    pbds<int> pb;
    for(int i=1;i<=n;i++){
        pb.insert(i);

    }
    int idx=0;
    while(!pb.empty()){
        idx=(idx+1)%pb.size();
        auto it=pb.find_by_order(idx);
        cout<<*it<<" ";
        pb.erase(it);
    }

    
    
    return 0;
}