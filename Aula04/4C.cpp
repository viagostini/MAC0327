#include <bits/stdc++.h>

using namespace std;

int main () {
	int ar1, ar2, ar3, a, b, c, sum;

	cin >> ar1 >> ar2 >> ar3;

	a = sqrt(ar1*ar2/ar3);
	b = sqrt(ar3*ar1/ar2);
	c = sqrt(ar2*ar3/ar1);

	sum = 4 * (a+b+c);
	printf("%d\n", sum);
}
