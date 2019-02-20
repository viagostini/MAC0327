#include <bits/stdc++.h>

using namespace std;

int main () {
    int q, l1, l2, r1, r2;
    scanf("%d", &q);
    for (int i = 0; i < q; i++) {
        cin >> l1 >> r1 >> l2 >> r2;
        if (l1 != l2)
            cout << l1 << " " << l2 << endl;
        else if (r1 != r2)
            cout << r1 << " " << r2 << endl;
        else
            cout << l1 << " " << r2 << endl;
    }
}
