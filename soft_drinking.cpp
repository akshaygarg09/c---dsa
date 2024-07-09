#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    // Total milliliters of drink
    int totalDrink = k * l;
    // Total lime slices
    int totalLimes = c * d;
    // Total salt
    int totalSalt = p;

    // Calculate the number of toasts based on each resource
    int toastsDrink = totalDrink / nl;
    int toastsLimes = totalLimes;
    int toastsSalt = totalSalt / np;

    // Find the minimum number of toasts each friend can make
    int toasts = min({toastsDrink, toastsLimes, toastsSalt}) / n;

    cout << toasts << endl;
    return 0;
}
