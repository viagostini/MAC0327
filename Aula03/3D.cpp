#include <bits/stdc++.h>

using namespace std;

int main () {
    uint64_t n;

    cin >> n;
    
    uint64_t ans = 2;
    ans <<= n;
    ans -= 2ull;

    uint64_t ans2 = 0;
    for (int i = 1; i <= n; i++)
        ans2 += pow(2,i);

    cout << ans << endl;
    cout << ans2 << endl;
}

