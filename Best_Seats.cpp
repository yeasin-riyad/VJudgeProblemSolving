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
        for(int i=0;i<n;i++) cin>>num[i];
        
        int minSum = INT_MAX;
        
        for(int i=1;i<n;i++){
            int currentSum = num[i-1] + num[i];
            if(currentSum < minSum){
                minSum = currentSum;
            }
        }
        
        cout <<minSum <<"\n";
    }
    return 0;
}