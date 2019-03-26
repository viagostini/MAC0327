#include <bits/stdc++.h>

using namespace std;

bool f[150] = {false};

int main () {
    int ans = 0;
    char c;
    while ((c = getchar()) != EOF) {
        if (c >= 'a' && c <= 'z') {
            if (f[c] == false) {
                ans++;
                f[c] = true;
            }
        } 
    }
    printf("%d\n", ans);
}
