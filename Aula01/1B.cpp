#include <bits/stdc++.h>

using namespace std;

int main () {
    int a, n, p = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        p += a;
    }
    int ans = p/5;
    if (p % 5) ans++;
    printf("%d\n", ans);
}
