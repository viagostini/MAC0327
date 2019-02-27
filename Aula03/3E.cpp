#include <bits/stdc++.h>

using namespace std;

int main () {
    int n, d;
    multiset<int> dv;
    
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> d;
        dv.insert(d);
    }

    int x = *prev(dv.end());

    for (int i = 1; i <= x; i++)
        if (x % i == 0)
            dv.erase(dv.find(i));

    int y = *prev(dv.end());

    printf("%d %d\n", x, y); 

}
