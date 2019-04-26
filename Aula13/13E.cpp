#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define mp make_pair
#define pb push_back
#define pii pair<int,int>
#define all(c) c.begin(), c.end()
#define FOR(i, k, n) for (int i = k; i < n; i++)
#define ROF(i, k, n) for (int i = n-1; i >= k; i--)

vector<ll> adj[100005];
bool seen[100005];

ll ans = 0;
bool has_cycle = false;

void dfs (ll src, ll parent) {
    seen[src] = true;
    for (ll i = 0; i < adj[src].size(); i++) {
        ll u = adj[src][i];
        if (u == parent) continue;
        if (seen[u]) has_cycle = true;
        else dfs(u, src);
    }
}

int main () {
    ios_base::sync_with_stdio(false);
    
    ll n, m;

    cin >> n >> m;

    for (ll i = 0; i < m; i++) {
        ll x, y;
        cin >> x >> y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    // loop through components
    for (ll i = 1; i <= n; i++) {
        if (!seen[i]) {
            dfs(i, 0);
            if (!has_cycle)
                ans++;
            has_cycle = false;
        }
    }
    cout << ans << endl;
}
