#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    long long smallest = n; 

    for(long long i = 2; i * i <= n; i++){
        if(n % i == 0){
            smallest = i;
            break;
        }
    }


    if(smallest == n) cout << 1 << "\n";
    else cout << smallest << "\n";

    return 0;
}
