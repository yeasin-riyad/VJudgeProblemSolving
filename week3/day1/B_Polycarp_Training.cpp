#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x;
    cin>>n;
    multiset <int> val;
    for(int i=0;i<n;i++){
        cin>>x;
        val.insert(x);

    }
  
    int day=0;
    while(true){
        auto it= val.lower_bound(day+1);
        if(it!=val.end()){
            day++;
            val.erase(it);
        }
        else{
            break;
        }
    }
    cout<<day<<"\n";
    return 0;
}