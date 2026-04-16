#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--) {
        int a,b;
        cin>>a>>b;
        long long small_area = 10 * 10;
        long long large_area = 15 * 15;

        long long small_ratio = small_area * b;
        long long large_ratio = large_area * a;

        if(small_ratio > large_ratio)
            cout<<"Small"<<"\n";
        else if(large_ratio > small_ratio)
            cout<<"Large"<<"\n";
        else
            cout<<"Equal"<<"\n";
    }
    return 0;
}


