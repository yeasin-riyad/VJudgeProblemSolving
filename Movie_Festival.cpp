#include <bits/stdc++.h>
using namespace std;

// custom comparator function
bool sortByEndingTime(const pair<int,int>& a, const pair<int,int>& b) {
    return a.second < b.second;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<pair<int,int>> movies(n);

    for(int i = 0; i < n; i++) {
        cin >> movies[i].first >> movies[i].second;
    }

    sort(movies.begin(), movies.end(), sortByEndingTime);

    int count = 0;
    int last_end = 0;

    for(auto &m : movies) {
        if(m.first >= last_end) {
            count++;
            last_end = m.second;
        }
    }

    cout << count << '\n';
    return 0;
}
