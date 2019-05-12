#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair <ll,ll > pll;

#define INF (1LL<<61)
#define mp make_pair

vector <pll> adj1[123456];
vector <pll> adj2[123456];

ll dist[100005];
ll dist1[100005];
ll dist2[100005];

void dijkstra(int s,vector <pll> adj[]){
        priority_queue <pll> pq;
        fill(dist, dist + 100005, INF);
        dist[s] = 0;
        pq.push(mp(0, s));
        while (!pq.empty()) {
            ll w1 = -pq.top().first;
            ll u = pq.top().second;
            pq.pop();
            for (ll i = 0; i < adj[u].size(); i++) {
                ll v = adj[u][i].first;
                ll w2 = adj[u][i].second;
                ll weight = w2 + w1;
                if (weight < dist[v]) {
                    dist[v] = weight;
                    pq.push(mp(-weight, v));
                }
            }
        }
    }
    int main(){
        int t;
        scanf("%d", &t);
        while (t-->0){
            for (int i = 0; i <= 100004; i++) {
                adj1[i].clear();
                adj2[i].clear();
                dist1[i]=0;
                dist2[i]=0;
            }
            ll n, m, k, s, t;
            scanf("%lld %lld %lld %lld %lld",&n, &m, &k, &s, &t);
            for (int i = 1; i<= m; i++) {
                ll u, v, w;
                scanf("%lld %lld %lld",&u, &v, &w);
                adj1[u].push_back(mp(v,w));
                adj2[v].push_back(mp(u,w));
            }
            dijkstra(s, adj1);
            for (int i = 1; i <= n; i++) {
                dist1[i] = dist[i];
            }
            dijkstra(t, adj2);
            for (int i = 1; i<= n; i++) {
                dist2[i] = dist[i];
            }

            ll res = dist1[t];
            for (int i = 1; i <= k; i++) {
                ll u, v, w;
                scanf("%lld %lld %lld",&u, &v, &w);
                res = min(res, min(dist1[u] + w + dist2[v], dist1[v] + w + dist2[u]));
            }
            if (res == INF)
                printf("-1\n");
            else
                printf("%lld\n", res);
    }
} 

