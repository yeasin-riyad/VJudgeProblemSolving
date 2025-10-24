#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int p,q,k;
        cin>>p>>q;
        map<int,set<int>> nums;
        for(int i=1;i<=p;i++){
            cin>>k;
            nums[k].insert(i);

        }
        int x,y;

        while(q--){
            cin>>x>>y;
            if(nums.find(x)!=nums.end() && nums.find(y)!=nums.end()){
                 int a=*nums[x].begin();
                 int b=*nums[y].rbegin();
                 if(b>=a) cout<<"YES\n";
                 else cout<<"NO\n";
                
            }else{
                cout<<"NO\n";
            }

        }
       

    }
    return 0;
}