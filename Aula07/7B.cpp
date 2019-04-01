#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main () {
    ll n, k, x;
    set<ll> s;

    s.insert(0);
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> x;
        s.insert(x);
    }

    auto it = s.begin();
    for (int i = 0; i < k; i++) {
        if (next(it) == s.end())
           cout << 0 << endl;
        else {
            cout << *next(it)-*it << endl;
            it = next(it);
        }
    }
}
