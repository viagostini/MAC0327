#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define mp make_pair
#define pb push_back
#define pii pair<int,int>
#define all(c) c.begin(), c.end()
#define FOR(i, k, n) for (int i = k; i < n; i++)
#define ROF(i, k, n) for (int i = n-1; i >= k; i--)

int freq[100005], cards[100005];
multiset<ll, greater<ll>> s;

int main () {
    ios_base::sync_with_stdio(false);
    ll n, k;
    string hand;
    
    cin >> n >> k >> hand;
    
    FOR(i, 0, n) {
        freq[hand[i]-'A']++;
    }
   
    FOR(i, 0, 27) s.insert(freq[i]);

    ll sum = 0;
    ll left = k;
    auto it = s.begin();
    while (true) {
        if (left <= 0 || it == s.end())
            break;
        sum += min(*it, left) * min(*it, left);
        left -= min(*it, left);
        it++;
    }
    cout << sum << endl;
}
