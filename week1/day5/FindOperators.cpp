#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    long long int a,b;
    while(t--){
        cin>>a>>b;
        if(a>b) cout<<">\n";

        else if(a<b) cout<<"<\n";
        else cout<<"=\n";

    }
    return 0;
}