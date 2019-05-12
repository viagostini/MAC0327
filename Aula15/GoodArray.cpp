#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define mp make_pair
#define pb push_back
#define pii pair<int,int>
#define all(c) c.begin(), c.end()
#define FOR(i, k, n) for (int i = k; i < n; i++)
#define ROF(i, k, n) for (int i = n-1; i >= k; i--)

int main () {
    ios_base::sync_with_stdio(false);
    int n;
    ll sum = 0;
    int arr[200005];
    unordered_map<int, int> cnt;
    
    cin >> n;
    cnt.reserve(n);
    FOR(i, 0, n) {
        cin >> arr[i];
        sum += arr[i];
        cnt[arr[i]]++;
    }
    vector<int> ans;
    FOR(i, 0, n) {
        sum -= arr[i];
        cnt[arr[i]]--;
        if (sum % 2 == 0 && sum/2 <= 1e6 && cnt[sum/2] > 0)
            ans.pb(i);
        sum += arr[i];
        cnt[arr[i]]++;
    }
    cout << ans.size() << endl;
    for (int a : ans)
        cout << a + 1 << " ";
}
