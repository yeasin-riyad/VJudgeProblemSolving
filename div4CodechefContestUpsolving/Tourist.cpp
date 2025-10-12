#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        int result=INT_MAX;
        while(n--){
            int x,y;
            cin>>x>>y;
            result=min(result,abs(a-x)+abs(b-y));
        }
        cout<<result<<endl;
    }
    return 0;
}