#include <iostream>
#include <vector>
#include <cmath> // For ceil

void solve() {
    int n;
    std::cin >> n;

    std::vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i] >> b[i];
    }

    std::vector<int> tm(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> tm[i];
    }

    long long current_time = 0;
    for (int i = 0; i < n; ++i) {
        // Arrival at current station
        current_time = std::max(current_time + tm[i], (long long)a[i]);

        // If it's the last station, we just arrive and don't depart
        if (i == n - 1) {
            break;
        }

        // Calculate minimum stay duration
        long long min_stay = std::ceil((double)(b[i] - a[i]) / 2.0);

        // Departure time from current station
        current_time = std::max(current_time + min_stay, (long long)b[i]);
    }

    std::cout << current_time << std::endl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
