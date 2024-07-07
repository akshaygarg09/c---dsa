#include <iostream>
#include <vector>
#include <climits>

using namespace std;

struct Laptop {
    int speed, ram, hdd, cost;
};

int main() {
    int n;
    cin >> n;
    
    vector<Laptop> laptops(n);
    for (int i = 0; i < n; ++i) {
        cin >> laptops[i].speed >> laptops[i].ram >> laptops[i].hdd >> laptops[i].cost;
    }

    vector<bool> outdated(n, false);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i != j &&
                laptops[i].speed < laptops[j].speed &&
                laptops[i].ram < laptops[j].ram &&
                laptops[i].hdd < laptops[j].hdd) {
                outdated[i] = true;
                break;
            }
        }
    }

    int minCost = INT_MAX;
    int chosenLaptop = -1;

    for (int i = 0; i < n; ++i) {
        if (!outdated[i] && laptops[i].cost < minCost) {
            minCost = laptops[i].cost;
            chosenLaptop = i + 1;
        }
    }

    cout << chosenLaptop << endl;

    return 0;
}
