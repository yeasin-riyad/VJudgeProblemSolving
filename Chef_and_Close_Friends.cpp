#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     int t;
    cin>>t;
    
    while (t--) {
        int x,y,z;
        cin>>x>>y>>z;
        
        int count = 0;
        for (int pos = x - y; pos <= x + y; pos++) {
            if (pos == x) continue; 
            if (pos >= x - z && pos <= x + z) {
                count++;
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}