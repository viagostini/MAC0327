#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define mp make_pair
#define pb push_back
#define pii pair<int,int>
#define all(c) c.begin(), c.end()
#define FOR(i, k, n) for (int i = k; i < n; i++)
#define ROF(i, k, n) for (int i = n-1; i >= k; i--)

ll first_divisor(ll n) {
    for (ll i = 2; i*i <= n; i++)
        if (n % i == 0)
            return i;
    return n;
}

int main () {
    ios_base::sync_with_stdio(false);
    ll n;
    cin >> n;
    n -= first_divisor(n);
    cout << 1 + n/2 << endl;
}
