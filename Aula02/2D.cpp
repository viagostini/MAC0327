#include <bits/stdc++.h>

using namespace std;

int main () {
    int n, k, used = 1, w = 0;
    char last;
    string s;

    cin >> n >> k >> s;
    sort(s.begin(), s.end());

    last = s[0];
    w += s[0] - 96;
    for (int i = 1; i < n && used < k; i++) {
        if (s[i] - last > 1) {
            last = s[i];
            w += s[i] - 96;
            used++;
        }
    }
    if (used == k)
        printf("%d\n", w);
    else
        printf("-1");
}
