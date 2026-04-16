#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,k;
    cin>>n>>k;
    vector<int> num(n);
    for(int i=0;i<n;i++) cin>>num[i];
    long long l=0,r=0,sum=0,cnt=0;
    while (r<n)
    {
        sum+=num[r];
        while(sum>=k){
            cnt+=n-r; 
            sum-=num[l];
            l++;

        }
        r++;
    }

    cout<<cnt;
    
    return 0;
}