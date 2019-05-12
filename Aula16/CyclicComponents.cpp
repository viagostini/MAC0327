#include <bits/stdc++.h>

using namespace std;

int n, m;
int deg[200005];
bool seen[200005];
vector<int> comp;
vector<int> adj[200005];

void dfs(int v) {
	seen[v] = true;
	comp.push_back(v);
	
	for (int to : adj[v])
		if (!seen[to])
			dfs(to);
}

int main() {
	cin >> n >> m;
	for (int i = 0; i < m; ++i) {
		int x, y;
		cin >> x >> y;
		x--, y--;
		adj[x].push_back(y);
		adj[y].push_back(x);
		deg[x]++;
		deg[y]++;
	}
	
	int ans = 0;
	for (int i = 0; i < n; ++i) {
		if (!seen[i]) {
			comp.clear();
			dfs(i);
			bool ok = true;
			for (int v : comp) 
                if (deg[v] != 2)
                    ok = false;
			if (ok) ++ans;
		}
	}
	
	cout << ans << endl;;
}
