#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cnt1=0,cnt2=0,cnt3=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x==1) cnt1++;
            else if(x==2) cnt2++;
            else if(x==3) cnt3++;
        }
        int remove=min(cnt1,cnt3)+max(0,cnt2-1);
        cout<<remove<<"\n";
    }
    return 0;
}