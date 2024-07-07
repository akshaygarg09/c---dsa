#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;
    vector<long long> a(n + 1); // 1-indexed

    for (long long i = 1; i <= n; ++i) {
        cin >> a[i];
        a[i] += a[i - 1]; // Calculate cumulative sum
    }

    for (long long i = 0; i < m; ++i) {
        long long x;
        cin >> x;

        // Binary search to find the dormitory
        long long dormitory = lower_bound(a.begin(), a.end(), x) - a.begin();

        // Calculate room number within the dormitory
        long long room = x - a[dormitory - 1];

        cout << dormitory << " " << room << "\n";
    }

    return 0;
}
