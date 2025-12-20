#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x;
    cin>>n>>x;
    vector<int> num(n);
    for(int i=0;i<n;i++) cin>>num[i];
    long long int sum=0,l=0;
    int subarray=0;
    for(int i=0;i<n;){
       if(num[i]<=(x-sum)){
        sum+=num[i];
        if(sum==x){
            subarray++;    
            sum-=num[l];
                l++;
            
        }
        i++;
        
       }else{
        sum-=num[l];
        l++;


       }
    }
    cout<<subarray<<"\n";
    return 0;
}