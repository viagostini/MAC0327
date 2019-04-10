#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll v[500005];
int cnt[500005];

int main () {
    int n;
    ll sum = 0;

    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
    }
    
    if (sum % 3 != 0) {
        cout << "0" << endl;
        return 0;
    }

    ll pref_sum = 0;
    for (int i = n-1; i >= 0; i--) {
        pref_sum += v[i];
        if (pref_sum == sum/3)
            cnt[i] = 1;
    }
    
    for (int i = n-2; i >= 0; i--)
        cnt[i] += cnt[i+1];
    
    ll ans = 0;
    pref_sum = 0;
    for (int i = 0; i+2 < n; i++) {
        pref_sum += v[i];
        if (pref_sum == sum/3)
            ans += cnt[i+2];
    }
    cout << ans << endl;
}








