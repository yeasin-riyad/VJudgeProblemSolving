#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n;
    string s;
    cin >> n >> s;

    vector<int> pos;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') pos.push_back(i);
    }

    int c1 = pos.size();
    if (c1 == 0) {
        cout << 0 << " " << 0 << "\n";
        return;
    }

    int max_f = 0;
    for (int i = 1; i <= n; i++) {
        if (c1 >= (i + 1) / 2) max_f = i;
        else break;
    }

    vector<int> target(c1, -1);
    int ones_needed = 0;
    int current_ones = 0;
    int current_zeros = 0;

    for (int i = 0; i < max_f; i++) {
        if (current_ones <= current_zeros) {
            target[ones_needed] = i;
            ones_needed++;
            current_ones++;
        } else {
            current_zeros++;
        }
    }


    int ones_ptr = 0;
    vector<int> final_target;
    int filled_until = 0;

    for (int i = 0; i < n; i++) {
        bool must_have_one = false;
        if (ones_ptr < ones_needed && target[ones_ptr] == i) {
            must_have_one = true;
        }

        if (must_have_one) {
            final_target.push_back(i);
            ones_ptr++;
        } else {
           
            int ones_remaining = c1 - ones_ptr;
            int slots_remaining = n - i;
            
            if (ones_remaining == slots_remaining) {
                final_target.push_back(i);
                ones_ptr++;
            } 
            else if (ones_ptr < c1 && pos[ones_ptr] <= i) {
                final_target.push_back(i);
                ones_ptr++;
            }
        }
    }

    ll total_swaps = 0;
    for (int i = 0; i < c1; i++) {
        total_swaps += abs(pos[i] - final_target[i]);
    }

    cout << max_f << " " << total_swaps << "\n";
}

int main() {
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}