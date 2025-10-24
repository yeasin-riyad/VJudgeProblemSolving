#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,val,distinct=0;
     cin>>n>>m;
    vector<int> num(n+1);
    vector<int> ans(n+1,0);
    vector<bool> visited(100001,false);
 
    for(int i=1;i<=n;i++){
        cin>>num[i];
    }
    for(int i=n;i>=1;i--){
        if(!visited[num[i]]){
            visited[num[i]]=true;
            distinct++;
          
        }
          ans[i]=distinct;
    }

    while(m--){
        cin>>val;
        cout<<ans[val]<<"\n";

    }
  

    return 0;
}