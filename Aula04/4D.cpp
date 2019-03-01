#include <bits/stdc++.h>

using namespace std;

int sumdigits (long long x) {
    int ans = 0;
    while (x > 0) {
        ans += x % 10;
        x = x / 10;
    }
    return ans;
}

int main () {
    long long n;

    cin >> n;

    long long x = 0;
    while (x < n)
        x = x*10 + 9;
    x /= 10;

    long long y = n-x;

    cout << sumdigits(x) + sumdigits(y) << endl;
}
