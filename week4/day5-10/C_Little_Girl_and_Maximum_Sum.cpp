#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q;
    cin>>n>>q;
    vector<int> num(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>num[i];
    }
    vector<int> diff_array(n+2,0);
    while(q--){
        int l,r;
        cin>>l>>r;
        diff_array[l]++;
        diff_array[r+1]--;
    }
    long long int sum1=0;
    for(int i=1;i<=n;i++){
        diff_array[i]=diff_array[i-1]+diff_array[i];
    }
     vector<long long> freq(n + 1);
    for (int i = 1; i <= n; i++) freq[i] = diff_array[i];
    sort(num.begin()+1,num.end(),greater<long long>());
    sort(freq.begin()+1,freq.end(),greater<long long>());


    for(int i=1;i<=n;i++){
        sum1+= num[i]*freq[i];
    }
    cout<<sum1<<"\n";


    return 0;
}