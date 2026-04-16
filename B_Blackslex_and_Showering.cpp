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
        vector<int> num(n);
        for(int i=0;i<n;i++){
            cin>>num[i];
        }
        int initial_dis=0;
        for(int i=1;i<n;i++){
            initial_dis+=abs(num[i]-num[i-1]);
        }
        int max_gain=0;
        for(int i=1;i<n-1;i++){
            int without_remove=abs(num[i]-num[i-1])+abs(num[i]-num[i+1]);
            int with_remove=abs(num[i-1]-num[i+1]);


            max_gain=max(max_gain,without_remove-with_remove);
        }
        max_gain=max(max_gain,abs(num[1]-num[0]));
        max_gain=max(max_gain,abs(num[n-1]-num[n-2]));
        cout<<initial_dis-max_gain<<"\n";
        
    }
    return 0;
}