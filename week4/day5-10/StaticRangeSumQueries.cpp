#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q;
    cin>>n>>q;
    vector<int> nums(n);
    vector<long long int> freq_count(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    freq_count[0]=nums[0];
    for(int i=1;i<n;i++){
        freq_count[i]=freq_count[i-1]+nums[i];
    }
    int x,y;
    while (q--)
    {
       cin>>x>>y;
       if(x==1){
        cout<<freq_count[y-1]<<"\n";
        continue;

       }
       cout<<freq_count[y-1]-freq_count[x-2]<<"\n";
    }
    
    return 0;
}