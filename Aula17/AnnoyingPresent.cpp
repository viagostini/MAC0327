#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;

    long long neg = ((n-1)/2) * ((n-1)/2 + 1);
    if (n % 2 == 0) neg += n/2;
    long long pos = n * (n-1)/2;

    long long ans = 0;
    for (int i = 0; i < m; i++) {
        int x, d;
        cin >> x >> d;
        ans += x * n;
        if (d < 0)
            ans += neg * d;
        else
            ans += pos * d;
    }
    printf("%.15f\n", double(ans)/n);
}
