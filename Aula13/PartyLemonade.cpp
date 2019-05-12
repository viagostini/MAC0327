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
    int n, L;
    cin >> n >> L;
    vector<int> cost(n);
    FOR (i, 0, n) cin >> cost[i];
    FOR (i, 0, n-1) cost[i+1] = min(cost[i+1], 2*cost[i]);
    ll ans = (1LL << 30);
    ll sum = 0;
    ROF (i, n-1, 0) {
        int need = L / (1 << i);

    }
}
