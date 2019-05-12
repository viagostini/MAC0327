#include <bits/stdc++.h>

using namespace std;

int main() {
    long long x, y;
    cin >> x >> y;
    double a = y * log(x);
    double b = x * log(y);
    
    if (x == y)
        cout << '=' << endl;
    else if (fabs(a-b) < 1e-8)
        cout << '=' << endl;
    else if (a < b)
        cout << '<' << endl;
    else
        cout << '>' << endl;
}
