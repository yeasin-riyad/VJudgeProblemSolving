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
        int res=0;

         for (int i = 1; i < n ; i++) {
            if (num[i]==num[i-1]) {
                res++;
                num[i]=-1;
            }
        }
            cout<<res<<"\n";

    }

    return 0;
}