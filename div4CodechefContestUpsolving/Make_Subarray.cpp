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
        string s;
        cin>>s;
        int start=-1;
        int end=-1;
        for(int i=0;i<n;i++){
            if(s[i]=='1' && start==-1){
                start=i;
                end=i;
            }else if(s[i]=='1') end=i;
        };
        int result=0;
        for(int i=start+1;i<=end;i++){
            if(s[i]=='0') result++;

        }
        cout<<result<<endl;
    }
    return 0;
}