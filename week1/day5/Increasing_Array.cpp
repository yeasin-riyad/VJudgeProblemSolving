#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    long long int val,result=0;
    cin>>n;
    vector<long long int> num(n);
    for(int i=0;i<n;i++){
        cin>>val;
        num[i]=val;
    };
   for(int i=1;i<n;i++){
     if(num[i]<num[i-1]){
        result+=num[i-1]-num[i];
        num[i]=num[i-1];
     }
   }
   cout<<result<<endl;
    return 0;
}