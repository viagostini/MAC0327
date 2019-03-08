#include <bits/stdc++.h>

using namespace std;

int main () {
    int n, d[105] = {0}, s, t;

    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        int dist;
        cin >> dist;
        d[i] = d[i-1] + dist;
    }

    cin >> s >> t;

    if (s > t) swap(s,t);
    
    int forward = d[t-1] - d[s-1];
    int backward = d[n] - forward;

    cout << min(forward, backward) << endl;
}
