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
    string s;
    int zeros = 0, ones = 0;
    
    cin >> n >> s;
    for (char c : s) {
        if (c == '0') zeros++;
        else ones++;
    }
    cout << abs(zeros-ones) << endl;
}
