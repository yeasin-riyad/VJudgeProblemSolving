#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m,x;
        cin>>n>>m;
        string s,c;
        cin>>s;
        set<int> ind;
         for(int i=0;i<m;i++){
            cin>>x;
            ind.insert(x);

        }
        cin>>c;
        sort(c.begin(),c.end());
       
            int idx=0;
        for(int pos:ind){
            s[pos-1]=c[idx];
            idx++;
        }

        cout<<s<<"\n";


    }
    return 0;
}