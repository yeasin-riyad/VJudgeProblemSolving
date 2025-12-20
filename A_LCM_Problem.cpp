#include<bits/stdc++.h>
using namespace std;

long long int LCM(int x,int y){
    return (x/__gcd(x,y))*y;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long int l,r;
        cin>>l>>r;
        long long int x,y,lcm;
        x=l;
        y=2*x;
        lcm=LCM(x,y);
        if(lcm<=r){
            cout<<x<<" "<<y<<"\n";
        }else{
            cout<<-1<<" "<<-1<<"\n";
        }
    }
    return 0;
}