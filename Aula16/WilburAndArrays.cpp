#include <bits/stdc++.h>

using namespace std;

long long arr[200005];

int main() {
    int n;
    long long ans = 0;
    cin >> n;
    cin >> arr[0];
    ans += abs(arr[0]);
    for (int i = 1; i < n; i++) {
        cin >> arr[i];
        ans += abs(arr[i] - arr[i-1]);
    }
    cout << ans << endl;
}

