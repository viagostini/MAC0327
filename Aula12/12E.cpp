#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main () {
    ll L, R;
    cin >> L >> R;

    if (L == R) {
        cout << 0 << endl;
    } else {
        // gets index of leftmost bit that is different in L and R
        ll idx = 64 - __builtin_clzll(L^R);

        // answer is a string of idx+1 ones = 2^idx - 1
        ll ans = (1LL << idx) - 1;

        cout << ans << endl;
    }
}
