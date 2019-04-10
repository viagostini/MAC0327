#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

ll cnt[100005], ans[100005];

int main () {
    int n, x;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> x;
        cnt[x]++;
    }
    
    ans[0] = cnt[0]*0;
    ans[1] = cnt[1]*1;
    
    for (int i = 2; i <= 100000; i++)
        ans[i] = max(ans[i-1], ans[i-2] + i*cnt[i]);

    cout << ans[100000] << endl;
}
