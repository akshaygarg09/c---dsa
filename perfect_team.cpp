#include <iostream>
using namespace std;

int main() {
    int m, p, s;
    cin >> m >> p >> s;

    int team_size = min(min(m, p), s);
    int total_skill = m + p + s;

    cout << total_skill << endl;

    return 0;
}