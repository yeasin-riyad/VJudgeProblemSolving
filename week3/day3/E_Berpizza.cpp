#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x,y;
    cin>>n;

    set<pair<int,int>>  monocarp;
    multiset<pair<int,int>> polycarp;
    vector<int> result;
    int idx=1;
    while(n--){
        cin>>x;
        if(x==1){
            cin>>y;
            monocarp.insert({idx,y});
            polycarp.insert({y,-idx});
            idx++;

        }
        else if(x==3){
         auto val=polycarp.rbegin();
         int amt=val->first;
         int index=-val->second;
         result.push_back(index);
         polycarp.erase({amt,-index});
         monocarp.erase({index,amt});
        }
        else{
            auto val=monocarp.begin();
            int index=val->first;
            int amt=val->second;
            result.push_back(index);
            monocarp.erase({index,amt});
            polycarp.erase({amt,-index});
        }
    }

    for(auto val:result){
        cout<<val<<" ";
    }
  
    return 0;
}