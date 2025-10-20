#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;

    while(t--){
            unordered_set<int> seen;
            int result=0;
            int num,n;
            cin>>n;
            vector<int> val(n);
            for(int i=0;i<n;i++){
                cin>>val[i];
                   
            }
              for(int i=n-1;i>=0;i--){
                if(seen.count(val[i])){
                    result=i+1;
                    break;
                }else{
                    seen.insert(val[i]);
                }
                   
            }
            cout<<result<<"\n";


    }
    return 0;
}