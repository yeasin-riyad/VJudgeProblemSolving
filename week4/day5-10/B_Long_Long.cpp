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
        vector<int> num(n);
        for(int i=0;i<n;i++){
            cin>>num[i];
        }
        bool block_start=false;
        long long int sum=0,count_block=0;
        for(int i=0;i<n;i++){
            sum+=abs(num[i]);

            if(num[i]<0 && !block_start){
                block_start=true;
                count_block++;
            }else if(num[i]>0){
                block_start=false;
            }else if(num[i]==0){
                continue;
            }

        };
        cout<<sum<<" "<<count_block<<"\n";
    }
    return 0;
}