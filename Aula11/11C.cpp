#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define mp make_pair
#define eb emplace_back
#define pii pair<int,int>
#define all(c) c.begin(), c.end()
#define FOR(i, k, n) for (int i = k; i < n; i++)
#define ROF(i, k, n) for (int i = n-1; i >= k; i--)

void get_divisors(int num, vector<int>& v) {
    for (int i = 1; i*i <= num; i++) {
        if (num % i == 0) {
            v.eb(i);
            if (num/i != i)
                v.eb(num/i);
        }
    }
}

bool has_same_digit(int a, int b) {
    string _a = to_string(a);
    string _b = to_string(b);
    FOR (i, 0, _a.size())
        FOR (j, 0, _b.size())
            if (_a[i] == _b[j])
                return true;
    return false;
}

int main () {
    ios_base::sync_with_stdio(false);
    int x, ans = 0;

    cin >> x;

    vector<int> divs;
    get_divisors(x, divs);

    for (int div : divs) {
        if (has_same_digit(x, div)) {
            ans++;
        }
    }
    cout << ans << endl;
}
