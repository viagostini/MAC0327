#include <bits/stdc++.h>

using namespace std;

int cnt[100005], dp[100005];

int main () {
    int n, x;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> x;
        cnt[x]++;
    }
    
    dp[0] = cnt[0]*0;
    dp[1] = cnt[1]*1;
    
    for (int i = 2; i <= 100000; i++)
        dp[i] = max(dp[i-1], dp[i-2] + i*cnt[i]);

    cout << dp[100000] << endl;
}
