#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define mp make_pair
#define pb push_back
#define pii pair<int,int>
#define all(c) c.begin(), c.end()
#define FOR(i, k, n) for (int i = k; i < n; i++)
#define ROF(i, k, n) for (int i = n-1; i >= k; i--)

bool solve(ll n, ll s) {
    ll t = n, sum = 0;
    while (t > 0) {
        sum += t % 10;
        t /= 10;
    }
    return (n-sum) >= s;
}

int main () {
    ios_base::sync_with_stdio(false);
    ll n, s;
    cin >> n >> s;
    // cout << solve(n, s) << endl;
    ll lo = 1, hi = n, ans = -1;
    while (lo <= hi) {
        ll mid = lo + ((hi-lo) / 2);
        if (solve(mid,s)) {
            hi = mid - 1;
            ans = mid;
        } else {
            lo = mid + 1;
        }
    }
    if (ans == -1) cout << 0 << endl;
    else cout << n-ans+1 << endl;
}







