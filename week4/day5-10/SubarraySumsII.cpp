#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x;
    cin>>n>>x;
    vector<int> num(n);
    map<long long int,int> frequency_count;
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    long long int subarray=0,prefix_sum=0;
    frequency_count[0]=1;
    for(int i=0;i<n;i++){
        prefix_sum+=num[i];
        if(frequency_count.find(prefix_sum-x)!=frequency_count.end()){
            subarray+=frequency_count[prefix_sum-x];
        }
        frequency_count[prefix_sum]++;

    }
    
   
    cout<<subarray<<"\n";
    return 0;
}