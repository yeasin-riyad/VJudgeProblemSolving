#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    vector<int> b(m);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int j=0;j<m;j++) cin>>b[j];
    int i=0,j=0;
    long long int pair=0;
    while(i<n && j<m){
        if(a[i]<b[j]) i++;
        else if(a[i]>b[j]) j++;
        else if(a[i]==b[j]){
            int x=a[i];
            long long int count_a=0,count_b=0;
            while(a[i]==x){
                  i++;
                    count_a++;
                
             
                  
                }
          

            while(b[j]==x){
                    j++;
                    count_b++;
              
            }
            pair+=(count_a*count_b);

        } 
    }
    cout<<pair;
    return 0;
}