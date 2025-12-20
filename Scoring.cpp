#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
      
        cout<<y-(y-x)/2<<" "<<(y-x)/2<<"\n";
    }
    return 0;
}