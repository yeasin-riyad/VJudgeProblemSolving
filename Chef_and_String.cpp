#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long n,k;  
        cin>>n>>k;
        string s;
        cin>>s;

        bool all_I=true;
        for (char c:s) {
            if (c!='I') {
                all_I = false;
                break;
            }
        }

        if (all_I){
            cout<<(n-1)*k+(k-1)<<"\n";
            continue; 
        }

        long long inside_pair=0;
        
        string temp = s;  
        for(int i=0;i<n;i++){
            if(temp[i]=='I'){ 
                if(i>0 && temp[i-1]!='I'){
                    inside_pair++;
                    temp[i] = temp[i-1];
                }else if (i<n-1 && temp[i+1] != 'I'){
                    inside_pair++;
                    temp[i] = temp[i+1];
                }
            }else {
                if (i<n-1 && temp[i] == temp[i+1]) {
                    inside_pair++;
                }
            }
        }

        for (int i=0;i<n;i++) {
            if (temp[i] == 'I') {
                int j = i;
                while (j<n && temp[j] == 'I') {
                    j++;
                }
                int len = j - i;
                if (len>1) {
                    inside_pair += (len - 1);
                    i = j - 1;
                }
            }
        }

        long long connection_pairs = 0;
        
        char first_char = temp[0]; 
        char last_char = temp[n-1];

        if (first_char == 'I' || last_char == 'I') {
            connection_pairs = k - 1;
        } else {
            if (first_char == last_char) {
                connection_pairs = k - 1;
            } else {
                connection_pairs = 0;
            }
        }

        cout<<inside_pair*k+connection_pairs<<"\n";
    }
    return 0;
}