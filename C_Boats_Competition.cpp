#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,maximum=0;
        cin>>n;
        vector<int> num(n);
        for(int i=0;i<n;i++) cin>>num[i];
        sort(num.begin(),num.end());
        for(int i=2;i<=2*n;i++){
            int l=0,r=n-1,team=0;
            while(l<r){
                if(num[l]+num[r]==i){
                    team++;
                    l++;
                    r--;
                }else if(num[l]+num[r]>i) r--;
                else if(num[l]+num[r]<i) l++;

            }
            maximum=max(maximum,team);
           
        }

        cout<<maximum<<"\n";

    }
    return 0;
}