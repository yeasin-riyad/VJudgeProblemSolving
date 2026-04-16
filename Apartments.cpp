#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> desigred_apartment_size(n);
    vector<int> apartment_size(m);
    for(int i=0;i<n;i++) cin>>desigred_apartment_size[i];
    for(int i=0;i<m;i++) cin>>apartment_size[i];
    sort(desigred_apartment_size.begin(),desigred_apartment_size.end());
    sort(apartment_size.begin(),apartment_size.end());
    int i=0,j=0,ans=0;
    while(i<n & j<m){
        if(apartment_size[j]<desigred_apartment_size[i]-k){
            j++;
        }else if(apartment_size[j]>desigred_apartment_size[i]+k) i++;
        else {
            i++;
            j++;
            ans++;
        }
    }

    cout<<ans<<"\n";
    return 0;
}