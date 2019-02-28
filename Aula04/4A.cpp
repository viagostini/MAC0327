#include <bits/stdc++.h>

using namespace std;

int f[102];

int main () {
	int a, b, c, d, e, sum = 0;
	cin >> a >> b  >> c >> d >> e;
	f[a] += 1;
	f[b] += 1;
	f[c] += 1;
	f[d] += 1;
	f[e] += 1;
	sum += a + b + c + d + e;
	int d1 = 0;
	for (int i = 100; i >= 1; i--)
		if (f[i] >= 3)
			d1 = max(d1, i*3);	

	int d2 = 0;
	for (int i = 100; i >= 1; i--)
		if (f[i] == 2)
			d2 = max(d2, i*2);

	printf("%d\n", sum-(max(d1,d2)));
} 
