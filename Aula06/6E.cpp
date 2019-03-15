#include <bits/stdc++.h>

typedef unsigned long long ull;

using namespace std;

vector<ull> divs;

int main () {
    ull n, k;

    scanf("%llu %llu", &n, &k);

    for (ull i = 1; i*i <= n; i++)
        if (n % i == 0)
            divs.push_back(i);

    int m = divs.size();

    for (int i = m-1; i >= 0; i--)
        if (divs[i] != n/divs[i])
            divs.push_back(n/divs[i]);

    if (k > divs.size())
        cout << -1 << endl;
    else
        cout << divs[k-1] << endl;
}
