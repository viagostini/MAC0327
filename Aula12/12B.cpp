#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define mp make_pair
#define pb push_back
#define all(c) c.begin(), c.end()
#define FOR(i, k, n) for (int i = k; i < n; i++)
#define ROF(i, k, n) for (int i = n-1; i >= k; i--)

vector<int> p;

void solve(int i) {
    bool vis[1003] = {false};
    while (!vis[i]) {
        vis[i] = true;
        i = p[i];
    }
    cout << i+1 << " ";
}

int main () {
    int n;
    cin >> n;
    p.reserve(n);
    FOR (i, 0, n) {
        cin >> p[i];
        p[i]--;
    }
    FOR (i, 0, n) {
        solve(i);
    }    
}
