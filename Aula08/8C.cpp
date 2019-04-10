#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main () {
    ll n, k;
    cin >> n >> k;

    ll m = pow(10, k);
    //ll mdc = __gcd(n, m);
    //ll mmc = n * m / mdc;
    
    cout << lcm(n, m) << endl;
}
