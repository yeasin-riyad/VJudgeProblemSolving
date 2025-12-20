#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> num(n);
    for(int i=0;i<n;i++) cin>>num[i];
    int l=0,r=n-1;
    long long int sum1=0,sum2=0,result=0;
    while(l<=r){
       
        if(sum1>sum2){
            sum2+=num[r];
            r--;
        }else{
            sum1+=num[l];
            l++;
        }
         if(sum1==sum2) result=sum1;

    }
    cout<<result;
    return 0;
}