#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<array<long long,3>> cust(n);

    for(int i = 0; i < n; i++) {
        cin >> cust[i][0] >> cust[i][1];
        cust[i][2] = i;
    }

    sort(cust.begin(), cust.end());

    priority_queue<
        pair<long long,int>,
        vector<pair<long long,int>>,
        greater<pair<long long,int>>
    > pq;

    vector<int> ans(n);
    int roomCount = 0;

    while(!pq.empty()) pq.pop();

    for(auto &c : cust) {
        long long start = c[0];
        long long end   = c[1];
        int idx = c[2];

        if(!pq.empty() && pq.top().first < start) {
            auto [freeTime, roomNo] = pq.top();
            pq.pop();

            ans[idx] = roomNo;
            pq.push({end, roomNo});
        }
        else {
            roomCount++;
            ans[idx] = roomCount;
            pq.push({end, roomCount});
        }
    }

    cout << roomCount << "\n";
    for(int i = 0; i < n; i++)
        cout << ans[i] << " ";
    cout << "\n";

    return 0;
}
