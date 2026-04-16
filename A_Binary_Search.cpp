#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k,x;
    cin>>n>>k;
    
    bool found=false;
    vector<int> num(n);
    for(int i=0;i<n;i++){
        cin>>num[i];
    }

    for(int i=0;i<k;i++){
        int l=0,r=n-1;
    int mid=(l+r)/2;
        bool found=false;
        cin>>x;
         while(l<=r){
            if(num[mid]==x){
                cout<<"YES\n";
                found=true;
                break;
            }
            else if(num[mid]>x){
                r=mid-1;
                mid=(l+r)/2;
            }else{
                l=mid+1;
                mid=(l+r)/2;

            }

    }
    if(!found) cout<<"NO\n";
    }
   
    return 0;
}