#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    // Calculate the number of unique lucky numbers up to length n
    long long result = (1LL << n) - 1; // 2^n - 1
    result *= 2; // Because each length from 1 to n contributes 2^k combinations

    cout << result << endl;

    return 0;
}
