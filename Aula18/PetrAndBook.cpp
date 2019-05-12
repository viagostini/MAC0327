#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, p[8] = {0};
    cin >> n;
    for (int day = 1; day < 8; day++)
        cin >> p[day];
    int day = 1;
    while (n) {
        if (p[day] >= n) { 
            cout << day << endl;
            break;
        }
        n -= p[day];
        day = (day == 7) ? 1 : day+1;
    }
}
