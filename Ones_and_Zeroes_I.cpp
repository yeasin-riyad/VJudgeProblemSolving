#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        long long ones = 0, zeros = 0;
        long long res = 0;
        
        for(char c:s) {
            if (c=='1') ones++;
            else zeros++;
            
            if(ones>=zeros) {
                res++;
            }
        }
        
        cout<<res<<"\n";
    }
    
    return 0;
}


