#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, max_x = 0, max_y = 0;;
    string query;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> query >> x >> y;
        if (x < y) swap(x,y);
        if (query[0] == '+') {
            max_x = max(max_x, x);
            max_y = max(max_y, y);
        } else {
            if (max_x <= x && max_y <= y)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}
