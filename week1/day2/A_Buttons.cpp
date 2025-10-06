#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    cin>>a>>b;
    int sum=0;
    int i=2;
    while(i!=0){
        if(a>=b) {
            sum+=a;
            a--;
        }
        else {
            sum+=b;
            b--;
        }
        i--;
    }
    cout<<sum<<"\n";
    return 0;
}