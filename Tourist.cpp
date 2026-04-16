#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int result=0;
        int n,a,b;
        cin>>n>>a>>b;
        while(n--){
            int x,y;
            cin>>x>>y;
            if(x==a || y==b) continue;
            else{
                result= abs((a-x)+(b-y));

            }
        }
        cout<<result<<"\n";
    }
    return 0;
}