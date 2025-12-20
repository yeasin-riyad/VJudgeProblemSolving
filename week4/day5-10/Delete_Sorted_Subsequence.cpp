#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        string S;
        cin >> N >> S;

        int operations = 0;
        for (int i = 1; i < N; i++) {
            // যখন 1 থেকে 0 পরিবর্তন হচ্ছে, একটি নতুন operation প্রয়োজন
            if (S[i-1] == '1' && S[i] == '0') {
                operations++;
            }
        }

        // যদি স্ট্রিং balanced না হয় (যেমন শুধুমাত্র 1 বা 0 দিয়ে শুরু হলে)
        if (!S.empty() && S[0] == '1') operations++;

        cout << operations << "\n";
    }
    return 0;
}
