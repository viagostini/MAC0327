#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define mp make_pair
#define pb push_back
#define pii pair<int,int>
#define all(c) c.begin(), c.end()
#define FOR(i, k, n) for (int i = k; i < n; i++)
#define ROF(i, k, n) for (int i = n-1; i >= k; i--)

int main () {
    ios_base::sync_with_stdio(false);
    int n, ones = 0;

    cin >> n;

    int choc[n], pos[n] = {0};
    FOR (i, 0, n) {
        cin >> choc[i];
        ones += choc[i];
    }

    for (int i = 1, j = 0; j < n; j++) {
        if (choc[j] == 1)
            pos[i++] = j;
    }

    ll ans = 1;
    for (int i = 2; i <= ones; i++)
        ans *= (pos[i] - pos[i-1]);

    if (ones == 1) ans = 1;
    else if (ones == 0) ans = 0;

    cout << ans << endl;
}
