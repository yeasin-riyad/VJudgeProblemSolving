#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c;
    cin>>a>>b>>c;
    int remaining_pizza=a-b;
    int revenue=remaining_pizza*c;
    cout<<revenue<<"\n";
    return 0;
}