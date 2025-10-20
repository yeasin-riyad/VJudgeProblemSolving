#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x;
    cin>>n;
    deque<int> num;
    for(int i=0;i<n;i++){
        cin>>x;
        if(i%2==0) num.push_back(x);
        else num.push_front(x);     

    }
    if(n%2==1) reverse(num.begin(),num.end());
    for(int x:num) cout<<x<<" ";
    return 0;
}