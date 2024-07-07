#include <iostream>
#include <string>
using namespace std;

int sumOfDigits(string number) {
    int sum = 0;
    for (char c : number) {
        sum += c - '0';
    }
    return sum;
}

int main() {
    string n;
    cin >> n;

    if (n.length() == 1) {
        cout << 0 << endl;
        return 0;
    }

    int count = 0;
    while (n.length() > 1) {
        int sum = sumOfDigits(n);
        n = to_string(sum);
        count++;
    }

    cout << count << endl;
    return 0;
}
