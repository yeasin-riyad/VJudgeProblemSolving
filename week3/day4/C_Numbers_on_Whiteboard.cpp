#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        priority_queue <int> pq;
        int n,x;
        cin>>n;
        for(int i=1;i<=n;i++){
          
            pq.push(i);
        }
        cout<<2<<"\n";
        for(int i=1;i<=n-1;i++){
            int x=pq.top();
            pq.pop();
            int y=pq.top();
            pq.pop();
         
            cout<<y<<" "<<x<<"\n";
            pq.push(ceil((x+y)/2.0));
        }
    }
    return 0;
}