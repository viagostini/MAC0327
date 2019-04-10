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
    int n, m, l, r, a[100005];
    cin >> n >> m;

    FOR (i, 1, n+1) cin >> a[i];
    FOR (i, 2, n+1) a[i] += a[i-1];

    while (m-->0) {
        cin >> l >> r;
        int f = (a[r] - a[l-1]) % 2;
        if (f % 2 == 0)
            cout << "Sim" << endl;
        else
            cout << "Nao" << endl;
    }
}
