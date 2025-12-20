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
        vector<int> num(n);
        for(int i=0;i<n;i++) cin>>num[i];
        string s;
        cin>>s;
        vector<long long int> freq(n);
        freq[0]=num[0];
        for(int i=1;i<n;i++){
            freq[i]=freq[i-1]+num[i];
        }
        int l=0,r=n-1;
        long long int score=0;
        while(l<r){
            if(s[l]=='L'){
                while(r>l && s[r]!='R') r--;
                if(l<r){
                    score+=freq[r]-((l>0?freq[l-1]:0));
                      r--;
                }
              

            }
            l++;
        }
        cout<<score<<"\n";
    }
    return 0;
}