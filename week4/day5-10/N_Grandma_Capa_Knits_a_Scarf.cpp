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
        int result=INT_MAX;
        for(char i='a';i<='z';i++){
            int l=0,r=n-1,change=0;
            while(l<=r){
                if(s[l]!=s[r]){
                if(s[l]==i){
                    change++;
                    l++;
                }
                else if(s[r]==i){
                    change++;
                    r--;
                }else{
                    change=INT_MAX;
                    break;                   
                }

            }else{
                l++;
                r--;
            };
            };
            result=min(result,change);

        }
        if(result==INT_MAX) cout<<"-1\n";
        else cout<<result<<endl;
    }
    return 0;
}