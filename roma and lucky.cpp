#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isLuckyDigit(char c) {
    return c == '4' || c == '7';
}

int countLuckyDigits(int number) {
    string str = to_string(number);
    int count = 0;
    for (char c : str) {
        if (isLuckyDigit(c)) {
            count++;
        }
    }
    return count;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> numbers(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }
    
    int result = 0;
    
    for (int number : numbers) {
        if (countLuckyDigits(number) <= k) {
            result++;
        }
    }
    
    cout << result << endl;
    
    return 0;
}
