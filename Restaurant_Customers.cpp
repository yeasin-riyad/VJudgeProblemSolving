#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> arrive(n), leave(n);

    for (int i = 0; i < n; i++) {
        cin >> arrive[i] >> leave[i];
    }

    sort(arrive.begin(), arrive.end());
    sort(leave.begin(), leave.end());

    int i = 0, j = 0;
    int current = 0, answer = 0;

    while (i < n && j < n) {

        if (arrive[i] < leave[j]) {
            current++;
            answer = max(answer, current);
            i++;
        }

        else {
            current--;
            j++;
        }
    }

    cout << answer << '\n';
    return 0;
}
