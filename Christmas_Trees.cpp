#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, a, m, b;
    cin >>n>>a>>m>>b;
    long long cost = n*a;
    long long revenue = m*b;
    cout << (revenue - cost);
    return 0;
}
