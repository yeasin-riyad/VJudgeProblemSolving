#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        int total_stu=x*y;
        int per = (z * 100) / total_stu;
      
        if(per>50) cout<<"YES\n";
        else cout<<"NO\n";
    }
    
    return 0;
}