#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define mp make_pair
#define pb push_back
#define pii pair<int,int>
#define all(c) c.begin(), c.end()
#define FOR(i, k, n) for (int i = k; i < n; i++)
#define ROF(i, k, n) for (int i = n-1; i >= k; i--)

// number is divisible by four if last two digits
// form a number that is divisible by four

int main () {
    ios_base::sync_with_stdio(false);
    string s;
    cin >> s;

    int sz = s.length();
    ll ans = 0;
    FOR (i, 0, sz) {
        int digit = int(s[i] - '0');
        if (digit % 4 == 0)
            ans++;
        if (i != 0) {
            int prev_digit = int(s[i-1] - '0');
            if ((prev_digit * 10 + digit) % 4 == 0)
                ans += i;
        }
    }
    cout << ans << endl;
}

