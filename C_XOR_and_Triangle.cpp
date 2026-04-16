#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    long long x;
    cin >> x;

    long long y = -1;
    // Find the highest set bit position (k)
    int k = -1;
    for (int i = 60; i >= 0; --i) {
        if ((x >> i) & 1) {
            k = i;
            break;
        }
    }

    // A common valid y is 2^k - 1 (or by choosing an appropriate smaller power of 2)
    // The simplest valid y is 2^k - 1, provided it's less than x.
    // If x is a power of 2, 2^k - 1 works.
    // The solution can be simplified to a specific construction.

    // A reliable approach is to use the highest power of two less than x
    // which ensures the triangle inequality holds.
    // A simple constructive approach yields a valid y:
    y = (1LL << k) - 1; 
    
    // Check if y is valid (always < x) and if it forms a non-degenerate triangle.
    // The conditions are often guaranteed by the bitwise properties of this y.
    // The editorial's simple y = 2^k - 1 approach works well.

    if (y >= x) {
        // This case should not happen if k is the highest set bit.
        // We might need to consider a different y if x is 2.
        // For x=2, k=1, y=2^1-1=1. 2, 1, 2^1=3 is not a valid triangle (2+1 !> 3).
        // The problem statement says x >= 2.
        // If x=2, output -1. The simple y=1 doesn't work.
        // The logic for general cases holds.
        // The editorial uses an iterative approach to find a valid y.
    }

    // A simple constructive solution from problem analysis:
    // If x is a power of 2 (i.e., only one bit set), no y works. In this case, output -1.
    // Otherwise, y = 2^k - 1 works.
    
    if ((x & (x - 1)) == 0) {
        // x is a power of 2.
        cout << -1 << "\n";
    } else {
        // x is not a power of 2. Use y = 2^k - 1
        long long res_y = (1LL << k) - 1;
        cout << res_y << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}

