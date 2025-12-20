#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int s,c;
        cin>>s>>c;
        if(c>s) {
            cout<<0<<"\n";
            continue;
        }
        int total_cell=0;
        for(int i=1;i<=s;i++){
            if(i>c){
                total_cell+=i-c;

            }
            
        }
        cout<<total_cell<<"\n";
    }
    return 0;
}