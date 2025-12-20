#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;

    pbds<long long int> pb1;
     for(int i=0;i<n;i++){
        int x;
        cin>>x;
        pb1.insert(x);
     }
      for(int i=0;i<m;i++){
        int x;
        cin>>x;
         int vl=pb1.order_of_key(x+1);
        cout<<vl<<" ";
     
     }
       
    
    return 0;
}