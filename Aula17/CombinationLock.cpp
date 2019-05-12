#include <bits/stdc++.h>

using namespace std;

vector<int> a(1003), b(1003);

int main() {
    char c;
    int n, ans = 0;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> c;
        a[i] = c- '0';
    }
    for (int i = 0; i < n; i++) {
        cin >> c;
        b[i] = c-'0';
    }
    
    for (int i = 0; i < n; i++)
        ans += min(abs(a[i]-b[i]), 10-abs(a[i]-b[i]));
    
    cout << ans << endl;
}
