#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define weigth first  
#define vertex second

typedef pair<int,int> pii;

const int MAX = 2e5 + 1;

bool seen[MAX];
vector<pii> adj[MAX];

long long prim(int source) {
    set<pii> s;
    long long minCost = 0;

    s.insert(mp(0, source));
    while (s.size()) {
        int x = s.begin()->vertex;
        int w = s.begin()->weigth;
        s.erase(s.begin());

        if (seen[x]) continue;

        minCost += w;
        seen[x] = true;

        for (int i = 0; i < adj[x].size(); i++) {
            int y = adj[x][i].vertex;
            if (!seen[y])
                s.insert(adj[x][i]);
        }
    }
    return minCost;
}

int main() {
    int n, m, x, y, z;
    cin >> n >> m;
    while (m-->0) {
        cin >> x >> y >> z;
        adj[x].pb(mp(z,y));
        adj[y].pb(mp(z,x));
    }
    cout << prim(1) << endl;
}
