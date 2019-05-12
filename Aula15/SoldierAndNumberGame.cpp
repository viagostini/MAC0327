#include <bits/stdc++.h>

using namespace std;

using namespace std;

const int MAX = 5e6 + 1;

int largest_prime[MAX], prime_divs[MAX], cnt[MAX];

void solve() {
    for (int i = 2; i < MAX; i++) {
        if (!largest_prime[i])
            for (int j = i; j < MAX; j += i)
                largest_prime[j] = i;
        int p = largest_prime[i];
        prime_divs[i] = 1 + prime_divs[i/p];
        cnt[i] += cnt[i-1] + prime_divs[i];
    }
}

int main() {
    int t, a, b;
    solve();
    scanf("%d", &t);
    while (t-->0) {
        scanf("%d%d", &a, &b);
        printf("%d\n", cnt[a]-cnt[b]);
    }
}
