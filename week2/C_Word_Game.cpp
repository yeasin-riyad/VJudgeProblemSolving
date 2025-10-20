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
         vector<string> p1(n),p2(n),p3(n);
         map<string,int> count;
         for(int i=0;i<n;i++){
            cin>>p1[i];
            count[p1[i]]++;
         }
            for(int i=0;i<n;i++){
            cin>>p2[i];
            count[p2[i]]++;
         }

            for(int i=0;i<n;i++){
            cin>>p3[i];
            count[p3[i]]++;
         }

         int c1=0,c2=0,c3=0;
         for(int i=0;i<n;i++){
            if(count[p1[i]]==1) c1+=3;
            else if(count[p1[i]]==2) c1+=1;
        }
          for(int i=0;i<n;i++){
            if(count[p2[i]]==1) c2+=3;
            else if(count[p2[i]]==2) c2+=1;
        }
          for(int i=0;i<n;i++){
            if(count[p3[i]]==1) c3+=3;
            else if(count[p3[i]]==2) c3+=1;
        }
        cout<<c1<<" "<<c2<<" "<<c3<<"\n";

    }
    return 0;
}