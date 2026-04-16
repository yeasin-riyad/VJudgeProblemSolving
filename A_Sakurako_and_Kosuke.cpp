#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        long long x = 0;
        int i = 1;
        bool sakurakoTurn = true;

        while (true) {
            long long move = 2LL * i - 1;
            if (sakurakoTurn) {
                x -= move;
                if (abs(x) > n) {
                    cout << "Sakurako\n";
                    break;
                }
            } else {
                x += move;
                if (abs(x) > n) {
                    cout << "Kosuke\n";
                    break;
                }
            }
            sakurakoTurn = !sakurakoTurn;
            i++;
        }
    }

    return 0;
}
