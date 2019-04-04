#include <bits/stdc++.h>

using namespace std;

string name[] = {
        "Sheldon",
        "Leonard",
        "Penny",
        "Rajesh",
        "Howard"
};

int main () {
    int n;
    cin >> n;
    n--;
    while (n >= 5) {
        n = n - 5;
        n = n / 2;
    }
    cout << name[n] << endl;
}
