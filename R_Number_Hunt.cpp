#include<bits/stdc++.h>
using namespace std;

bool isPrime(long long int n){
     if(n<2) return false;
     if(n==2) return true;
     if(n%2==0) return false;
     for(int i=3;i*i<=n;i+=2){
        if(n%i==0) return false;
     }
     return true;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long int x;
        cin>>x;
        if(x==1) {
            cout<<6<<"\n";
            continue;
        }
        long long int p=x;
        while(true){
            if(isPrime(p)) break;
            p++;
        }

        long long int q=p+1;
          while(true){
            if(isPrime(q)) break;
            q++;
        }

        cout<<p*q<<"\n";


    }
    return 0;
}