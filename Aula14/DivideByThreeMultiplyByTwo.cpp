#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define mp make_pair
#define pb push_back

int count (ll x) {
    int ans = 0;
    while (x % 3 == 0) {
        ans++;
        x /= 3;
    }
    return ans;
}

vector<pair<int,ll>> v;

int main () {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        v.pb(mp(-count(x), x));
    }
    sort(v.begin(), v.end());
    for (auto p : v)
        cout << p.second << " ";
}
