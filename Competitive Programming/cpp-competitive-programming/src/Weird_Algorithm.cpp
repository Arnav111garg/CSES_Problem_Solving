#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    if (!(cin >> n)) {
        cerr << "Please provide a valid integer input.\n";
        return 1;
    }

    while (n != 1) {
        cout << n << ' ';
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
    }
    cout << 1 << '\n';
    return 0;
}