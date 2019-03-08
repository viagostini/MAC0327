#include <bits/stdc++.h>

using namespace std;

int main () {
    int n, m, p[300005];
    int64_t sum = 0;
    
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> p[i];
        sum += p[i];
    }

    sort(p, p+n, greater<int>());

    cin >> m;

    for (int i = 0; i < m; i++) {
        int q;
        cin >> q;
        cout << sum - p[q-1] << endl;
    }

}
