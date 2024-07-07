#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // Initialize the count of proficient students for each topic
    vector<int> cnt(m + 1, 0);
    for (int ai : a) {
        for (int T = 1; T <= m; ++T) {
            if (ai % T == 0) {
                cnt[T]++;
            }
        }
    }

    // Form the team
    vector<int> team;
    for (int T = 1; T <= m; ++T) {
        if (cnt[T] > 0) {
            team.push_back(*max_element(a.begin(), a.end())); // Add the student with highest smartness
            break;
        }
    }

    if (team.empty()) {
        cout << -1 << endl; // No solution
        return 0;
    }

    // Calculate maximum difference
    int max_diff = *max_element(team.begin(), team.end()) - *min_element(team.begin(), team.end());
    cout << max_diff << endl;

    return 0;
}
