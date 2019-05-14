#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, a, b;
    cin >> n >> a >> b;
    for (long long x = 0; x <= n; x++) {
        long long y = n - a*x;
        if (y >= 0 && y % b == 0) {
            cout << "YES" << endl;
            cout << x << " " << y/b << endl;
            break;
        } else if (y < 0) {
            cout << "NO" << endl;
            break;
        }
    }
}
