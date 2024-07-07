#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string lucky_number;
    while (lucky_number.length() < n) {
        lucky_number += '4';
    }

    // Replace the last '4' with '7'
    if (lucky_number.length() > n) {
        for (int i = lucky_number.length() - 1; i >= 0; --i) {
            if (lucky_number[i] == '4') {
                lucky_number[i] = '7';
                break;
            }
        }
    }

    // Output the lucky number
    cout << lucky_number << endl;

    return 0;
}
