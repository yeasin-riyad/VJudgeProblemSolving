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
    int n,k;
    cin>>n>>k;
    vector<int> num(n);
    for(int i=0;i<n;i++) cin>>num[i];

    pbds<pair<int,int>> pb;
    int l=0,r=0;
    while(r<n){
        int count=0;
        pb.insert({num[r],r});
        if(r-l+1==k){
            int pos=k/2;
            if(k%2==0) pos--;
            auto it=pb.find_by_order(pos);
            int median=it->first;
            for(int i=0;i<k;i++){
                auto val=pb.find_by_order(i);
                count+=abs(median-val->first);

            }
            cout<<count<<" ";
            pb.erase({num[l],l});
            l++;

        }
        r++;
    }

    
    
    return 0;
}