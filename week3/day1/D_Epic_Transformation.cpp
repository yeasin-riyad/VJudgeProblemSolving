#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n;
        map<int,int> mp;
        while(n--){
            cin>>x;
            mp[x]++;
        }
        priority_queue<int> pq;

        for(auto[x,y]:mp){
            pq.push(y);
        }
        while (!pq.empty())
        {
            if(pq.size()<2) break;
           int x=pq.top();
           pq.pop();
           int y=pq.top();
           pq.pop();
           x--,y--;
           if(x>0) pq.push(x);
           if(y>0) pq.push(y);
        }
        int ans=0;
        while(!pq.empty()){
            ans=pq.top();
            pq.pop();
        }
        cout<<ans<<"\n";
    }
    return 0;
}