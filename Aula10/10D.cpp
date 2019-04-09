#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define all(c) c.begin(), c.end()
#define FOR(i,n) for (int i = 0; i < n; i++)
#define RFOR(i,n) for (int i = n-1; i >= 0; i--)


int main () {
    int n;
    cin >> n;
    
    unordered_map<int, int> dp;
    dp.reserve(n);
    vi arr(n);
    FOR(i,n) cin >> arr[i];
    
    int ans = 0;
    int last = 0;
    FOR(i,n) {
        int x = arr[i];
        dp[x] = dp[x-1] + 1;
        if (dp[x] >= ans) {
            ans = dp[x];
            last = x;
        }
    }

    int idx = 0;
    vi ret(ans);
    RFOR(i,n) {
        if (arr[i] == last) {
            ret[idx++] = i;
            last--;
        }
    }
    reverse(all(ret));

    cout << ans << endl;
    for (auto it : ret)
        cout << it + 1 << " ";
    cout << endl;
}

