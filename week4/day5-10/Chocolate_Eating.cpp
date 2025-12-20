#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        long long int a,b;
        cin>>a>>b;
        if(a==b) cout<<a+b-1<<"\n";
        else{
            cout<<a+b<<"\n";
        }
    }
    
    return 0;
}