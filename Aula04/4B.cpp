#include <bits/stdc++.h>

using namespace std;

int main () {
	int n;
	string s;

	cin >> n >> s;

	for (int i = 1; i < s.size(); i++) {
		if (s[i] != s[i-1]) {
			printf("YES\n%c%c\n", s[i-1], s[i]);
			return 0;
		}
	}
	printf("NO\n");
}
