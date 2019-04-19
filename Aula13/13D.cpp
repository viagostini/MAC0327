#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define mp make_pair
#define pb push_back
#define pii pair<int,int>
#define all(c) c.begin(), c.end()
#define FOR(i, k, n) for (int i = k; i < n; i++)
#define ROF(i, k, n) for (int i = n-1; i >= k; i--)

typedef pair<ll, int> PLI;

const ll INF = 1e17;

int n, m, x, y, w;

bool seen[100005];
int parent[100005];
long long dist[100005];
vector<pair<int,int>> adj[100005];

priority_queue<PLI, vector<PLI>, greater<PLI>> pq;

void dijkstra() {
    FOR (i, 1, n+1) dist[i] = INF;
    dist[1] = 0;
    pq.push(mp(dist[1], 1));
    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();
        for (int i = 0; i < adj[u].size(); i++) {
            int v = adj[u][i].first;
            ll w = adj[u][i].second;
            if (dist[v] > dist[u] + w) {
                parent[v] = u;
                dist[v] = dist[u] + w;
                pq.push(mp(dist[v], v));
            }
        }
    }
}

void backtrace() {
    if (dist[n] == INF)
        cout << -1 << endl;
    else {
        vector<int> trace;
        while (n != 1) {
            trace.pb(n);
            n = parent[n];
        }
        trace.pb(1);
        reverse(trace.begin(), trace.end());
        FOR (i, 0, trace.size()) cout << trace[i] << ' ';
        cout << endl;
    }
}

int main () {
    ios_base::sync_with_stdio(false);
    cin >> n >> m;
    while (m-->0) {
        cin >> x >> y >> w;
        adj[x].pb(mp(y, w));
        adj[y].pb(mp(x, w));
    }
    dijkstra();
    backtrace();
}





