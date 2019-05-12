#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> person;
#define l first
#define r second

int n;
vector<person> p;

bool cmp_l(person &a, person &b) {
	return a.l < b.l;
}

bool cmp_r(person &a, person &b) {
	return a.r < b.r;
}

int main() {
	ios::sync_with_stdio(0);

	cin >> n;
	p.resize(n);

    for (int i = 0; i < n; i++)
		cin >> p[i].l >> p[i].r;
	
	
    sort(p.begin(), p.end(), cmp_r);
	vector<person> q = p;
	sort(p.begin(), p.end(), cmp_l);
	
    long long ans = n;
	for (int i = 0; i < n; i++)
		ans += max(p[i].l, q[i].r);
	
	cout << ans << '\n';
}
