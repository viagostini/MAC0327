#include <bits/stdc++.h>

using namespace std;

int line[105];

int main () {
    int n, m, l, r;
    for (int i = 0; i < 105; i++) line[i] = 0;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%d%d", &l, &r);
        for (int j = l; j <= r; j++) line[j] = 1;
    }
    int k = 0;
    for (int i = 1; i <= m; i++)
        if (line[i] == 0) k++;
    printf("%d\n", k);
    for (int i = 1; i <= m; i++)
        if (line[i] == 0)
            printf("%d ", i );
}
