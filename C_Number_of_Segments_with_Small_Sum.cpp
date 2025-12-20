#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    long long int k,sum=0,result=0;
    cin>>n>>k;
    vector<int> num(n);
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    int l=0,r=0;
    while(r<n){
        sum+=num[r];
        if(sum<=k){
            result+=r-l+1;
          
        }else{
            sum-=num[l];
            sum-=num[r];
            l++;
            continue;

        }
          r++;
        
    }
    cout<<result;

    return 0;
}