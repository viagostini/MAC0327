#include <bits/stdc++.h>

using namespace std;

int main () {
    int n, num[105];
    
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> num[i];

    int ans = 0;
    for (int i = 0; i < n; i++) {
        int x = num[i];
        ans = max(ans, x);
        for (int j = i+1; j < n; j++) {
            x ^= num[j];
            ans = max(ans, x);
        }
    }
    cout << ans << endl;
}
