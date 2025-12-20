#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x;
    cin>>n>>x;
    vector<pair<int,int>> num(n);
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        num[i].first=val;
        num[i].second=i+1;
    }
    sort(num.begin(),num.end());
    for(int i=0;i<n-2;i++){
        int l=i+1,r=n-1;
        while(l<r){
            long long int sum=num[i].first+num[l].first+num[r].first;
            if(sum==x){
                cout<<num[i].second<<" "<<num[l].second<<" "<<num[r].second;
                return 0;
                break;
            }
            else if(sum>x){
                r--;
            }
            else{
                l++;
            }
        }
    }
     cout<<"IMPOSSIBLE\n";
    return 0;
}