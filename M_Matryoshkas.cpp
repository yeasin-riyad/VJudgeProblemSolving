#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    
    while(t--){
        multiset<int> val;
        int n,x;
        cin>>n;
        while(n--){
            cin>>x;
            val.insert(x);
        }

        int result=0;
         

        while(!val.empty()){
           int find=*val.begin();
           val.erase(val.begin());

           while (true)
           {
            find=find+1;
            auto it=val.find(find);
             if(it==val.end()) break;
            //  find=find+1;
             val.erase(it);
           }
           result++;
           
            // if(val.count(find+1)){
            //     val.erase(val.begin());
            //     find=find+1;
            //     continue;
            // }
            // int res=find;
            // val.erase(find);
             
            // find=*val.begin();
            // result++;

        }
        cout<<result<<"\n";
        

    }
    return 0;
}