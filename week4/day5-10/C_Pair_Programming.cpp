#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int k,l,m;
        cin>>k>>l>>m;
        vector<int> monocarp(l);
        vector<int> polycarp(m);
        vector<int> result;
        for(int i=0;i<l;i++) cin>>monocarp[i];
        for(int j=0;j<m;j++) cin>>polycarp[j];
        int i=0,j=0;
        while(i<l || j<m){
            if(monocarp[i]<=k && monocarp[i]!=0 && i<l){
                result.push_back(monocarp[i]);
                i++;
                
            }

            else if(monocarp[i]==0 && i<l){
                result.push_back(monocarp[i]);
                i++;
                k++;
                
            }
            else if(polycarp[j]<=k && polycarp[j]!=0 && j<m){
                 result.push_back(polycarp[j]);
                j++;
            }

            else if(polycarp[j]==0 && j<m){
                 result.push_back(polycarp[j]);
                j++;
                k++;
                
            }else{
                cout<<"-1";
                break;
                
            }
        }
        if(result.size()==l+m){
            for(int res:result){
            cout<<res<<" ";

        }
        }
        cout<<"\n";
    }
    return 0;
}