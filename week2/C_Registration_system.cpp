#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<string> val;
     while(n--){
      
        string s;
        cin>>s;
          if(!val.empty()){
          auto it=find(val.begin(),val.end(),s);
          if(it!=val.end()){
            cout<<s<<1<<'\n';
          }else{
            cout<<"OK\n";
          }
            
        }else{
            cout<<"OK\n";
          }
        val.push_back(s);
     }
    return 0;
}