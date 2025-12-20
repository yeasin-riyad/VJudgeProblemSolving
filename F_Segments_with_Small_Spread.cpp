#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    long long int k,result=0;
    cin>>n>>k;
    vector<long long int> num(n);
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    int l=0,r=0;
    multiset<long long int> ml;
    while (r<n)
    {
        ml.insert(num[r]);
 
            while(!ml.empty() && (*ml.rbegin()-*ml.begin())>k){
                    ml.erase(ml.find(num[l]));
                          l++;
            }
            result+=(r-l+1);

        r++;
    }

    cout<<result;
    

    return 0;
}