#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    if (!(cin >> s)) return;

    int max_len = 1;
    int current_len = 1;

    for (size_t i = 1; i < s.length(); i++) {
        if (s[i] == s[i - 1]) {
            current_len++;
        } else {
            current_len = 1;
        }
        max_len = max(max_len, current_len);
    }

    cout << max_len << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}