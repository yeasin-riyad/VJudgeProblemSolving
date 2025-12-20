#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,window_size=0;
        long long int sum=0,s;
        cin>>n>>s;
        vector<int> num(n);
        for(int i=0;i<n;i++) cin>>num[i];
        int result=accumulate(num.begin(),num.end(),0);
      
        if(result<s){
             cout<<-1<<"\n";
             continue;
        }
        if(result==s){
            cout<<0<<"\n";
            continue;
        }
        int l=0,r=0;
        while(r<n){
            sum+=num[r];

            while(s<sum){
                sum-=num[l];
                l++;
            }

            if(sum==s){
                 window_size=max(window_size,r-l+1);
            }

            r++;
        }

        cout<<n-window_size<<"\n";
       
    }
    
    return 0;
}