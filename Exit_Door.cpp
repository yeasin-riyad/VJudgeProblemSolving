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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> num(n);
        for(int i=0;i<n;i++) cin>>num[i];
        map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[num[i]]=i;
        }

      

        pbds<int> seats;

        for(int i=0;i<n;i++) seats.insert(i);
        int result=0;
        for(int i=n;i>=1;i--){
            int seat_no=mp[i];
            int left_seat=seats.order_of_key(seat_no);
            int right_seat=seats.size()-left_seat-1;
            result+=min(left_seat,right_seat);
            seats.erase(seat_no);

        }
        cout<<result<<"\n";
    }

    
    
    return 0;
}