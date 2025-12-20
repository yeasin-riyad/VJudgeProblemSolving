#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n,k;
    cin>>n>>k;

    vector<long long int> devisors;
    for(long long int i=1;i*i<=n;i++){
        if(n%i==0) {
            devisors.push_back(i);
            if(n/i!=i) devisors.push_back(n/i);
        }
    }
    sort(devisors.begin(),devisors.end());
  

    if(devisors.size()<k) cout<<-1<<"\n";
    else cout<<devisors[k-1];
    return 0;
}