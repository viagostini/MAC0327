#include <bits/stdc++.h>

using namespace std;

int main () {
    int T, n;
    string s;

    cin >> T;

    while (T-->0) {
        cin >> n >> s;
        bool ok = true;
        for (int i = 0; i < n; i++) {
            int dist = abs(s[i] - s[n-i-1]);
            if (dist > 2 || dist % 2) {
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << endl;
    }
}
