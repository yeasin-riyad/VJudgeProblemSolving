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
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    int l=0,r=0;
    pbds<pair<int,int>> win;
    while(r<n){
        win.insert({num[r],r});
        if(r-l+1==k){
            int pos=k/2;
            if(k%2==0){
                pos--;
            }
            auto it=win.find_by_order(pos);
            cout<<it->first<<" ";
            win.erase({num[l],l});
            l++;
        }
        r++;

    }
 
    
    return 0;
}