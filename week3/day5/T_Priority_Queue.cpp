#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q;
    cin>>n>>q;
    vector<priority_queue<int>>pq_list(n);
    int insert,get_Max,delete_Max,t,x,digit;
    while(q--){
        cin>>digit>>t;
        if(digit==0){
            cin>>x;
            pq_list[t].push(x);
            continue;
        };
        if(digit==1){
              if (!pq_list[t].empty()) {
                cout << pq_list[t].top() << "\n";
            }
            continue;
        }
        if(digit==2){
               if (!pq_list[t].empty()) {
                pq_list[t].pop();
            }
        }
    }
    return 0;
}