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
         int result =0;
         string s;
            char c;
             bool marked=false;
            
        while(n--){
            cin>>c;
            s.push_back(c);
        }
       
       
        int start=-1;
        int end=-1;
        for(int i=0;i<n;i++){
            if(marked && s[i]=='1') end=i-1;
            else if(s[i]=='1') {
                marked=true;
                start=i+1;
            }

        }
        for(int i=start;i<=end;i++){
            if(s[i]=='0') result++;
        }
        cout<<result<<"\n";
    }
    
    return 0;
}