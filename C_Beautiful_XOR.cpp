#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a==b){
            cout<<0<<"\n";
            continue;
        }
        int a_msb=__lg(a);
        int b_msb=__lg(b);
        if(b_msb>a_msb){
            cout<<-1<<"\n";
            continue;
        }
        vector<int> res;
        for(int i=0;i<=a_msb;i++){
            if((1ll<<i)&a){
                if((1ll<<i)&b){

                }else{
                      res.push_back(1ll<<i);


                }
            }
            else if((1ll<<i)&b){
                res.push_back(1ll<<i);
            }
            
        }
        cout<<res.size()<<"\n";
        for(int num:res){
            cout<<num<<" ";
        }
        cout<<"\n";
        
    }
    return 0;
}

