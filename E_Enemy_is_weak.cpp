#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int MAXN = 1e6 + 5;

int n;
int a[MAXN], b[MAXN];
int leftGreater[MAXN], rightSmaller[MAXN];
int BIT[MAXN];

void update(int idx, int val) {
    while (idx <= n) {
        BIT[idx] += val;
        idx += idx & -idx;
    }
}

int query(int idx) {
    int sum = 0;
    while (idx > 0) {
        sum += BIT[idx];
        idx -= idx & -idx;
    }
    return sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }
    
    sort(b, b + n);
    int sz = unique(b, b + n) - b;
    
    for (int i = 0; i < n; i++) {
        a[i] = lower_bound(b, b + sz, a[i]) - b + 1;
    }
    
    memset(BIT, 0, sizeof(BIT));
    for (int i = 0; i < n; i++) {
        leftGreater[i] = i - query(a[i]);
        update(a[i], 1);
    }
    
    memset(BIT, 0, sizeof(BIT));
    for (int i = n - 1; i >= 0; i--) {
        rightSmaller[i] = query(a[i] - 1);
        update(a[i], 1);
    }
    
    ll result = 0;
    for (int i = 0; i < n; i++) {
        result += (ll)leftGreater[i] * rightSmaller[i];
    }
    
    cout << result << "\n";
    
    return 0;
}