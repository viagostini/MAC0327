#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define mp make_pair
#define pb push_back
#define pair<int,int> pii
#define all(c) c.begin(), c.end()
#define FOR(i, k, n) for (int i = k; i < n; i++)
#define ROF(i, k, n) for (int i = n-1; i >= k; i--)

int ans = 0;
int color[10004];
vector<int>adj[10004], end_colors;

void dfs (int root, int parent) {
    color[root] = end_colors[root];
    if (color[root] != color[parent])
        ans++;
    for (int v : adj[root]) {
        if (!color[v])
            dfs(v, root);
    }
}

int main () {
    int n, m, x;
    cin >> n;
    FOR(i, 0, n-1) {
        cin >> x;
        adj[x-1].pb(i+1);
    }
    end_colors.reserve(n);
    FOR(i, 0, n) {
        cin >> end_colors[i];
    }
    dfs(0,0);
    cout << ans + 1 << endl;
}
