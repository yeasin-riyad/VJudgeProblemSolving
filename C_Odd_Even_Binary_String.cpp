#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> B(n);
        int cnt = 0;
        for(int i = 0; i < n; i++){
            cin >> B[i];
            if(B[i] == 1) cnt++;
        }

        if(cnt % 2 == n % 2) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
