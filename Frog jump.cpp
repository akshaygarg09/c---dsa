#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.length();

        int ans = 0;
        int leftmost = -1;

        for (int i = 0; i < n; ++i) {
            if (s[i] == 'L') {
                if (leftmost == -1) {
                    leftmost = i;
                } else {
                    ans = max(ans, i - leftmost);
                    leftmost = i;
                }
            }
        }

        cout << ans + 1 << endl; // Add 1 to account for the 'R' position
    }

    return 0;
}
