#include <bits/stdc++.h>

using namespace std;

unordered_map<int,int> cnt;

int main () {
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cnt[x]++;
    }

    int ans = 1;
    for (auto x : cnt)
        ans = max(ans, x.second);

    cout << ans << endl;
}
