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
         int winner=1;
        int max_speed=0;
        
        for (int i=1;i<=n;i++) {
            int d,t;
            cin>>d>>t;
            int speed=d/t;
            
            if (i==1) {
                max_speed=speed;
                winner=i;
            } else if(speed>max_speed) {
                max_speed=speed;
                winner=i;
            } else if(speed==max_speed && i<winner) {
                winner=i;
            }
        }
        
        cout<<winner<<"\n";
    }
    return 0;
}