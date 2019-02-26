#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main () {
    ll n;

    cin >> n;
    
    ll ans = (2LL << n) - 2;
    
    printf("%lld\n", ans);
}
