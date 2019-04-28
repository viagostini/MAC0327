#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define mp make_pair
#define pb push_back
#define pii pair<int,int>
#define all(c) c.begin(), c.end()
#define FOR(i, k, n) for (int i = k; i < n; i++)
#define ROF(i, k, n) for (int i = n-1; i >= k; i--)

int n, k;
queue<int> factors;

void initial_guess(int n) {
    for (int i = 0; i <= 31; i++) {
        int bit = 1 << i;
        if (n & bit) {
            factors.push(bit);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin >> n >> k;
    initial_guess(n);
    while (factors.size() < k && k <= n) {
        int x = factors.front();
        factors.pop();
        if (x > 1) {
            factors.push(x/2);
            factors.push(x/2);
        } else {
            factors.push(1);
        }
    }
    if (factors.size() == k) {
        cout << "YES" << endl;
        while (!factors.empty()) {
            cout << factors.front() << " ";
            factors.pop();
        }
    } else {
        cout << "NO" << endl;
    }
}
