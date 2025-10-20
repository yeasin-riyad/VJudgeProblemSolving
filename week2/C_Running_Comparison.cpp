#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long int> alice(n);
        vector<long long int> bob(n);
        for(int i=0;i<n;i++){
            cin>>alice[i];
        }
        for(int i=0;i<n;i++){
            cin>>bob[i];
        }
        int count=0;
         for(int i=0;i<n;i++){
            if(alice[i]<bob[i]){
                if(alice[i]*2>=bob[i]) count++;

            }else if(alice[i]>bob[i]){
                if(bob[i]*2>=alice[i]) count++;

            }else count++;
        }
        cout<<count<<"\n";
    }
    return 0;
}