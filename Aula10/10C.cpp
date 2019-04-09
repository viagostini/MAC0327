#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define mp make_pair
#define f first
#define s second
#define pb push_back
#define pair<int,int> pii;

int main () {
    int n, m;
    cin >> n >> m;

    int ans = min(n,m) + 1;
    cout << ans << endl;
    for (int i = 0; i <= min(n,m); i++)
        cout << i << " " << min(n,m) - i << endl;
}
