#include <bits/stdc++.h>

using namespace std;

long long ans = 0;

int main () {
    long long n;

    cin >> n;

    for (int i = 1; i <= n; i++)
        ans += pow(2, i);

    cout << ans << endl;
}
