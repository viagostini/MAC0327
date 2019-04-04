#include <bits/stdc++.h>

using namespace std;

int main () {
    int n, k;
    
    cin >> n >> k;

    int c = n-k;

    for (int i = 1; i <= c; i++)
        cout << i << " ";

    bool flag = true;

    for (int i = k; i >= 1; i--) {
        if (flag) {
            cout << c+i << " ";
            c += i;
            flag = false;
        } else {
            cout << c-i << " ";
            c -= i;
            flag = true;
        }
    }
}
