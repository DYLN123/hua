#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;
    int mn = 1000000;
    int mx = -1000000;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        sum += x;
        if (x < mn) mn = x;
        if (x > mx) mx = x;
    }

    cout << "count=" << n << "\n";
    cout << "sum=" << sum << "\n";
    cout << "min=" << mn << "\n";
    cout << "max=" << mx << "\n";

    return 0;
}
