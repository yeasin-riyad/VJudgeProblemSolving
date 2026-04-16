#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q,x;
    cin>>n>>q;
    vector<int> num(n);
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    for(int i=0;i<q;i++){
        cin>>x;
        int l=0,r=n-1,idx=n+1;
        while(l<=r){
            int mid=(l+r)/2;
            if(num[mid]>=x){
                idx=mid+1;
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        cout<<idx<<"\n";
    }
    return 0;
}