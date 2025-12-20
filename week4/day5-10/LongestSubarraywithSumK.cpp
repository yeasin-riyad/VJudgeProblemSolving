#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    vector<int> num(n);
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    int result=0,prefix_sum=0;
    unordered_map<int,int> mp;

    for(int i=0;i<n;i++){
        prefix_sum+=num[i];

        if(prefix_sum==k){
            result=max(result,i+1);
        }

          if(mp.find(prefix_sum-k)!=mp.end()){
            int len=int(i-mp[prefix_sum-k]);
             result=max(result,len);
          }


        if(mp.find(prefix_sum)==mp.end()){
            mp[prefix_sum]=i;
        }

    }
    cout<<result<<"\n";
    return 0;
}