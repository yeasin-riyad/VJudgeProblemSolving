#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        priority_queue<int>pq;
        long long res=0;
        while(n--){
            int x;
            cin>>x;
            if(x!=0){
                pq.push(x);
                continue;
            }
            if(!pq.empty()){
    
                res+=pq.top();
                pq.pop();
            }
        }
        cout<<res<<"\n";
    }
    return 0;
}