#include <iostream>
#include <vector>

using namespace std;

bool canSelectNumbers(int n, int k, int x) {
    if (k > n || k * (k + 1) / 2 > x || k * (2 * n - k + 1) / 2 < x) {
        return false;
    }
    return true;
}

int main() {
    ll n, k, x;

    cin >> n >> k >> x;
    if (canSelectNumbers(n, k, x)) {
        cout << "Yes, it's possible to select " << k << " distinct integers between 1 and " << n << " whose sum is equal to " << x << endl;
    } else {
        cout << "No, it's not possible to select " << k << " distinct integers between 1 and " << n << " whose sum is equal to " << x << endl;
    }

    return 0;
}
