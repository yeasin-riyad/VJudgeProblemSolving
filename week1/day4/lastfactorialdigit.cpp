#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n==1) return 1;
    return n*factorial(n-1);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int res= factorial(n);
        cout<<res%10<<"\n";
    }
    return 0;
}