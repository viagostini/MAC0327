#include <bits/stdc++.h>

using namespace std;

int main () {
    long n, S, ans = 0, curr_sum = 0;
    scanf("%ld%ld", &n, &S);
    for (long i = n; i > 0; i--) {
        ans += S/i;
        S -= (S/i) * i;
    }
    printf("%d\n", ans);
}
