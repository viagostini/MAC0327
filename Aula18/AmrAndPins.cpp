#include <bits/stdc++.h>

using namespace std;

int main() {
    int r, x1, y1, x2, y2;
    cin >> r >> x1 >> y1 >> x2 >> y2;
    double dist = sqrt(pow(y2-y1, 2.0) + pow(x2-x1, 2.0));
    int ans = ceil(dist / (2*r));
    cout << ans << endl;
}
