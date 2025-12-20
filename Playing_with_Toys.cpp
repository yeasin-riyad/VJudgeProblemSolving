#include<bits/stdc++.h>
using namespace std;
int main() {
      ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
        int result =n-m;
        if (result < 0) {
        result = 0;
    }
    cout << result << endl;
    return 0;
}


