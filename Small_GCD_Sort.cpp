#include<bits/stdc++.h>
using namespace std;
#include <numeric>


bool customCompare(pair<int,int> a, pair<int,int> b) {
    if(a.first != b.first) return a.first > b.first;
    return a.second < b.second; 
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int,int>> num;
        for(int i=1;i<=n;i++){
            int score=gcd(i,n);
            num.push_back({score,i});
        }

        sort(num.begin(),num.end(),customCompare);

        for(auto x:num){
            cout<<x.second<<" ";
        }
        cout<<"\n";
    }
    return 0;
}