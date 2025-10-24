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
        set<int> s;
        int result=1,idx=0;
        s.insert(num[idx]);
        for(int i=1;i<n;i++){
            if(s.find(num[i])!=s.end()){
              
                s.erase(num[i]);
                if(s.empty()){
                      result++;
                    for(int j=idx+1;j<=i;j++){
                        s.insert(num[j]);
                    }
                    idx=i;

                }
            }

        }
        cout<<result<<"\n";

    }
    
    return 0;
}